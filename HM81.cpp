#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main() {
int a[10],resault=0,avrage=0;
for(int i=0;i<10;++i)
{
	cout<<"enter ure entege for avarage:";
	cin>>a[i];
	
}
for(int i=0;i<10;i++){
	resault=resault+a[i];	
}
avrage=resault/10;
int big=a[1];
for(int i=0;i<10;i++){
	if(big<a[i]){
	big=a[i];
	}
}
int small=a[1];
for(int i=0;i<10;i++){
	if(small>a[i]){
		small=a[i];
	}
}
cout<<"your avrage is:"<<avrage;
cout<<"\nyour small number is:"<<small;
cout<<"\nyour big number is:"<<big;
getch();
}