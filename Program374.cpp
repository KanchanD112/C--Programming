
//generic code float deun 
#include<iostream>
using namespace std;

template <class T>
T Addition(T Arr[], int length)
{
    T Sum = 0;
    int iCnt = 0;

    for(iCnt=0; iCnt<length;iCnt++)
    {
        Sum = Sum + Arr[iCnt];

    }
    return Sum;
}


int main()
{
 int Size = 0, iCnt =0;
 float Ret = 0.0;
 float *ptr = NULL;

//step1
 cout<<"Enter number of elements :"<<"\n";
 cin>>Size;

//step2
 ptr = new float[Size];

//step3
 cout<<"Enter the elements: "<<"\n";
 for(iCnt=0;iCnt<Size;iCnt++)
 {
    cin>>ptr[iCnt];
 }

//step4
Ret = Addition(ptr, Size);
cout<<"Addition of all elements is :"<<Ret<<"\n";

//step5
delete []ptr;

    return 0;

}