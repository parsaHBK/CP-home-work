#include <iostream>
#include <conio.h>
using namespace std;
int main() {
int n;
cout<<"please enter one number to catch evry Divisor: ";
cin>>n;
for(int i=1;i<=n;i++)
{
	if(n%i==0)
		cout<<"your divisor is:"<<i<<'\t';
}
getch();
}