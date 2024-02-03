//problems on n numbers
#include<iostream>
using namespace std;

class Array
{
private:
    int *Arr;
    int iSize;

public:
  Array(int X)   //parameterised constructor
  {
    iSize = X;
    Arr = new int[iSize];
    
  }
  ~Array()   //destructor
  {
    delete []Arr;
  }
  void Accept() //member function
  {
    int iCnt = 0;
    cout<<"please enter the elements : "<<endl;
    for(iCnt = 0;iCnt <iSize;iCnt++)
    {
        cin>>Arr[iCnt];
    }
  }
  void Display()//member function
  {
    cout<<"Elements of the array are : "<<endl;
    int iCnt = 0;
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<endl;
  }

};                //end of class
int main()
{
int iLength = 0;

cout<<"Enter the number of element that you want to store :"<<endl;
cin>>iLength;

Array *aobj = new Array(iLength);

aobj->Accept();
aobj->Display();

    return 0;
}