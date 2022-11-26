#include <iostream>
#include <conio.h>

using namespace std;
int main (){
long int n,m,temp,tempsmall,mod;
cout<<"enter 2 number for catch the big divisor!"<<endl<<"first number:";
cin>>n;
cout<<"secend number";
cin>>m;
if(n<m)
{
	temp=m;
	tempsmall=n;
}
else if(m<n)
{
	temp=n;
	tempsmall=m;
}
else
{
	temp=n;
	tempsmall=m;
}
for(tempsmall;tempsmall<=temp;mod==0)
{
	mod=temp%tempsmall;
	temp=tempsmall;
	tempsmall=mod;
	cout<<temp<<'%'<<tempsmall<<'='<<mod<<endl;

if(mod==0)
{
cout<<"your big divisor is:"<<temp;
}
}
getch();
}