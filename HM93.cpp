#include <iostream>
#include <conio.h>
using namespace std;
int main() {
int resault,arr[10]= {0,1};

for(int i=0;i<10;i++){
	arr[i+2]=arr[i+1]+arr[i];
}

for(int i=0;i<10;i++){
	resault=resault+arr[i];
}
cout<<"fibonachi array is :";

for(int i=0;i<10;i++){
	cout<<arr[i]<<"\t";
}

cout<<endl<<"resault for all numbers:"<<resault;
getch();
}