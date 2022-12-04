#include <iostream>
#include <conio.h>
using namespace std;
int main() {
int aray1[5],aray2[5],x[5];
for(int i=0;i<5;i++){
	cout<<"enter your numbers for array1:";
	cin>>aray1[i];
}
for(int i=0;i<5;i++){
	cout<<"for array 2:";
	cin>>aray2[i];
}
for(int i=0;i<5;i++){
	x[i]=aray1[i];
	aray1[i]=aray2[i];
	aray2[i]=x[i];
	
}
cout<<"your first array is now:";
for(int i=0;i<5;i++){
	cout<<"\t"<<aray1[i];
}
cout<<"\nyour secend array is now:";
for(int i=0;i<5;i++){
	cout<<"\t"<<aray2[i];
}
getch();
}