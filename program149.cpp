//accept no. and find factorial by designing class
//input 4
//output:24

#include<iostream>
using namespace std;

class Number
{
 private:
   int iNo;
public:
Number(int x)
{
    iNo = x;
}
int Factotial()
{
    int iCnt = 0;
    int iFact = 1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iFact = iFact * iCnt;
    }return iFact;
}

};
int main()
{
int iValue=0;
int iRet = 0;

 cout<<"Enter the number :"<<endl;
 cin>>iValue;
 
 Number *nobj = new Number(iValue);
iRet = nobj->Factotial();
cout<<"Factorial is :"<<iRet<<endl;

delete nobj;
    return 0;
}