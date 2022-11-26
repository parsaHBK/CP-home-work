#include <iostream>
#include <conio.h>
using namespace std;
int main() {
unsigned int m,n;
int resualt=1,power;
cout<<"use 2 number for catch power of first number ^ secend number"<<endl;
cout<<"use your first number";
cin>>m;
cout<<"use your secend number";
cin>>n;
for(power = 1;power <=n;power++)
{
resualt=resualt*m;	
}

cout<<resualt;
getch();
}