#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
int n,i,mod;
cout<<"enter one unsigend number:";
cin>>n;
for(i=2;i<sqrt(n);i++)
{
	mod=n%i;
	if(mod==0);{
	continue;}
cout<<i<<'\t';
	
}
}
