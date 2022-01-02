#include<iostream>
using namespace std;
class Marvellous
{
    public:
    int Addition(int x,int y)
    {
        int iAns=0;
        iAns=x+y;
        return iAns;
    }
};

int main()
{
    int ino1=0,ino2=0,iRet=0;
    Marvellous mobj;
    cout<<"enter 1st no:";
    cin>>ino1;
    cout<<"enter 2nd no:";
    cin>>ino2;
  iRet=mobj.Addition(ino1,ino2);
    cout<<"Addition is:"<<iRet<<"\n";
    return 0;
}