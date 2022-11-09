#include <iostream>
using namespace std;
int main() {
int stipend;
int at,subtax; //at mean after tax
cout<<"use ure stipend: ";
cin>> stipend;
if(stipend<=6000000)
{
	at=stipend;
	cout<<at;
}
else if(stipend>=6000000 && stipend<8000000)
{
	subtax=stipend*0.05;
	at=stipend-subtax;
	cout<<at;
}
else if(stipend>=8000000 && stipend<10000000)
{
	subtax=stipend*0.10;
	at=stipend-subtax;
	cout<<at;
}
else if(stipend>=10000000 && stipend<14000000)
{
	subtax=stipend*0.15;
	at=stipend-subtax;
	cout<<at;
}
else if(stipend>=14000000 && stipend<18000000)
{
	subtax=stipend*0.20;
	at=stipend-subtax;
	cout<<at;
}
else if(stipend>=18000000 && stipend<25000000)
{
	subtax=stipend*0.25;
	at=stipend-subtax;
	cout<<at;
}
else if(stipend>25000000)
{
	subtax=stipend*0.35;
	at=stipend-subtax;
	cout<<at;
}
}