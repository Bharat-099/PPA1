#include<iostream>
using namespace std;
   
class Digits
{
    private:
    int iNo;

    public:
        Number(int x)
        {
            iNo = x;
        }

    void Display()
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt< = X; iCnt++)
        {
            cout<<"\t"<<endl;
        }       
    }
};



int main()
{
    int iValue = 0, int iRet = 0;

    cout<<"Enter the number : "<<endl;
    cin>>iValue;

    iRet = (iValue);
    cout<<"factorial is : "<<iRet<<endl;

    Digits nobj(iValue);

    return 0;
}