#include<iostream>
using namespace std;
int main()
{
int i,n,f1=0,f2=1,f3;
cout<<"enter n:";
cin>>n;
for(i=1;i<=n;i++)
{
if (i==1)
{
cout<<f1<<endl;
continue;
}
if (i==2)
{
cout<<f2<<endl;
continue;
}
f3=f1+f2;
f1=f2;
f2=f3;
cout<<f3<<endl;
}
return 0;

}
