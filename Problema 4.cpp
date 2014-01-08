/*
	Sa se determine punctul de pe curba bezier asociata
	(a0,a1,a2) in care tangenta la aceasta curba este || cu dreapata (a0,a2)
	c:[0,1]->R^2
	t0 apartine [0,1];
	t0, c(t0)
*/
#include <iostream>

using namespace std;

struct punct
{
	double x, y;
};

int main()
{
	//punctele care delimiteaza poligonul de control
	punct a0, a1, a2;

	//puncltele aflate prin combinatie afina
	punct b0, b1, b2;

	cout<<"Incepe introducerea parametrilor. Incepem cu cei de la poligonul de control.";
	cout<<"\n A.x: ";
	cin>>a0.x;

	cout<<"A.y: "; 
	cin>>a0.y;

	cout<<"B.x ";
	cin>>a1.x;

	cout<<"B.y ";
	cin>>a1.y;
 
	cout<<"C.x ";
	cin>>a2.x;

	cout<<"C.y ";
	cin>>a2.y;

	double t = 0.5;

	b0.x = (1-t)*a0.x + t*a1.x;
	b0.y = (1-t)*a0.y + t*a1.y;

	b1.x = (1-t)*a1.x + t*a2.x;
	b1.y = (1-t)*a1.y + t*a2.y;

	b2.x = (1-t)*b0.x + t*b1.x;
	b2.y = (1-t)*b0.y + t*b1.y;

	cout<<"Punctul de pe curba Bezier unde tangenta este paralela dreapta AC :";
	cout<<"("<<b2.x<<","<<b2.y<<")";

	return 1;

}

