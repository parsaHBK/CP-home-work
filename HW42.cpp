#include <iostream>

using namespace std;

int main() {
int x,y,z;
	cout<<"use your integers for this Draw{(x-y)*(x+z)/(x+y+z)^2+1\n}";
	cout<<"please use one Integer: ";
	cin>>x;
	cout<<"please use secend Integer: ";
	cin>>y;
	cout<<"please use third Integer: ";
	cin>>z;
int a,b,e,c,d,s,x2,y2,z2,xy,yz,zx;
	a=x-y;
	cout<<"\nx-y="<<a;
	b=x+z;
	cout<<"\nx+z="<<b;
	e=a*b;
	cout<<"\na*b="<<e;
	x2=x*x;
	cout<<"\nx2="<<x2;
	y2=y*y;
	cout<<"\ny*y="<<y2;
	z2=z*z;
	cout<<"\nz*z="<<z2;
	xy=2*x*y;
	cout<<"\n2xy="<<xy;
	yz=2*y*z;
	cout<<"\n2*y*z="<<yz;
	zx=2*z*x;
	cout<<"\n2*z*x="<<zx;
	c=x2+y2+z2+xy+yz+zx;
	cout<<"\nx2+y2+z2+xy+yz+zx= "<<c;
	d=c+1;
	cout<<"\nx2+y2+z2+xy+yz+zx+1="<<d;
	s=e/d;
	cout<<"\n{(x-y)*(x+z)/(x+y+z)^2+1="<<s;
	cout<<"\nyour final ansewr is="<<s;
}