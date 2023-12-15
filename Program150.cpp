#include<iostream>
using namespace std;

class Array
{
    private:
     int *Arr;
    int iSize;

    public:
    Array(int X)   // Parametrised constructor
    {
        iSize = X;
        Arr = new int[iSize];
    }

   ~ Array()       // Destructor
   {
     delete []Arr;
   }

    void Accept()    // Member function
    {
        int iCnt = 0;
        cout<<"Please enter the elements : "<<endl;
        for(iCnt = 0; iCnt< iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
     void Display()     // Ending class
     {
        cout<<"Elements of the array are: "<<endl;
        int iCnt = 0;
        for(iCnt = 0; iCnt< iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<endl;
     }
};

int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements that you wnat to store : "<<endl;
    cin>>iLength;

    Array aobj (iLength);

    aobj.Accept();
    aobj.Display();

    return 0;

}