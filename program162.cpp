
/*problems on string


*/
#include<iostream>
using namespace std;

class String
{ 
    private:
    char *str;
    int iSize;
    
    public:
    String()
    {
        int iSize(20);
        str = new char[20];
    }
     String(int X)
    {
        iSize=X;
       str = new char[iSize];
    }
    ~String()
    {
        delete []str;
    }
    void Accept()
    {
        
        cout<<"Enter the string :"<<endl;
        cin.getline(str,iSize);
    }
    void Display()
    {
        cout<<"string is :"<<str<<endl;
    }
    int CountCapital()
    {
        int iCnt = 0;
        char *temp = str;
        while(*temp != '\0')
        {
            if((*temp >= 'A') &&(*temp<='Z'))
            {
                iCnt++;
            }temp++;
        }return iCnt;
    }
};
int main()
{
String *sobj1 = new String(30);
int iRet = 0;
sobj1->Accept();
sobj1->Display();

iRet = sobj1->CountCapital();

cout<<"Capital count is :"<<iRet<<endl;
//cout<<"string is is :"<<iRet<<endl;
delete sobj1;


    return 0;
    
}