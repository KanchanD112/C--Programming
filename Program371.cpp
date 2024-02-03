// accept n elements from user and it will return the addition of all the n numebrs

#include<iostream>
using namespace std;


int main()
{
 int Size = 0, iCnt =0;
 int *ptr = NULL;

//step1
 cout<<"Enter number of elements :"<<"\n";
 cin>>Size;

//step2
 ptr = new int[Size];

//step3
 cout<<"Enter the elements: "<<"\n";
 for(iCnt=0;iCnt<Size;iCnt++)
 {
    cin>>ptr[iCnt];
 }

//step4
//function call
 cout<<"Elements of array are: "<<"\n";
 for(iCnt=0;iCnt<Size;iCnt++)
 {
    cout<<ptr[iCnt]<<"\t";
 }

cout<<"\n";
//step5
delete []ptr;

    return 0;

}