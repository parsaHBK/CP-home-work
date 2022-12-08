#include <iostream>
#include <conio.h>
using namespace std;
int main() {
cout<<"use ure number to put in array:";
int a,x;
cin>>x;
int ar[10] = {2,4,6,8,10,12,14,16,18,x};
for(int i=10;i>=0;i--)
{

	if(x<=ar[i])
{
	a=ar[i];
	ar[i]=x;
	ar[i+1]=a;
}
}
cout<<"your new array after puting is :";
for(int i=0;i<10;i++)
{
	cout<<ar[i]<<"\t";
}
getch();
}