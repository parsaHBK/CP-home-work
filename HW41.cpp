#include <iostream>

using namespace std;

int main() {
float x,y,Sum,subtraction,multiplication,Quotient;
int remaining,a,b;
	cout<<"use 2 number for catch Result of :(Sum,multiplication,subtraction,Quotient) ";
	cout<<"\nplease use one number: ";   //for x
	cin>>x;
	cout<<"\nplase use secend number: "; //for y
	cin>>y;
		Sum=x+y;
		subtraction=x-y;
		multiplication=x*y;
		Quotient=x/y;
		cout<<"\nSum: "<<Sum<<"\nsubtraction: "<<multiplication<<"\nQuotient: "<<Quotient;
	cout<<"\n\nuse 2 number for catch Result of :remaining\nworning:please use integer: ";
		cin>>a;
		cin>>b;
			remaining=a%b;
				cout<<"\nremaining:"<<remaining;
}