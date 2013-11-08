#include<iostream.h>


class deT()
{
public:
	int normal, derivat;

	deT(int x, int y)
	{
		this.normal = x;
		this.derivat = y;
	}
};

int main()
{
	int a, b, c, d, e, f, Ad, Bd, Cd, t, param1, param2;
	cout<<"a= ";
	cin>>a;

	cout<<"b=";
	cin>>b;

	cout<<"c=";
	cin>>c;

	cout<<"d=";
	cin>>d;

	cout<<"e=";
	cin>>e;

	cout<<"f=";
	cin>>f;

	cout<<"ad=";
	cin>>ad;

	cout<<"bd=";
	cin>>bd;

	cout<<"cd=";
	cin>>cd;

	cout<<"Insert t: ";
	cin>>t;

	param1 = a*t*t + b*t + c;
	param2 = 2*a*t + b;

	deT x =  new deT(param1, param2);

	param1 = d*t*t + e*t + f;
	param2 = 2*d*t + e;

	deT y = new deT(param1, param2);

	if((Ad*x.normal + Bd*y.normal + Cd) == 0 && (Ad.derivat + Bd.derivat) != 0) 
	{
		cout<<"Dreptele sunt paralele";
	}
	else if((Ad*x.normal + Bd*y.normal + Cd) == 0 && (Ad.derivat + Bd.derivat) == 0)
	{
		cout<<"Dreptele sunt identice";
	}
	else if((Ad*x.normal + Bd*y.normal + Cd) != 0 && (Ad.derivat + Bd.derivat) != 0)
	{
		int u = -(Ad*x.normal + Bd*y.normal + Cd)/(Ad.derivat + Bd.derivat);
		int rezX = x.normal + x.derivat * u;
		int rezY = y.normal + y.derivat *u;
		cout<<"Punctul de intersectie : ("<<rezX<<" , "<<rezY<<")"; 
	}

	//daca u n u e inseana ca sunt paralele (nu E intersecie)
	//daca ambele sunt 0 inseamna ca dreptele sunt identice
	//daca l-am aflat pe u il bag in in deTy si detX, si aflu coord.

	return 0;
}
