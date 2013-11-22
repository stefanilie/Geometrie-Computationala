//C:[0,1] -> R^2 ale carei comp sunt functii polinimiale de grad cel mult 2
//sa se determine 3 puncte a0,a1,a2  din R^2 astfel incat curba Bezier asociata
//( a0,a1,a2 ) sa fie C;
 
// c(t) = (1-t)^2 * a0 + 2t(1-t)a1 + t^2 * a2;
//aceeasi prob ptr 4 puncte
 
// c(t) = at^2 + bt + c , dt^2 + et + f )
//
 
#include<iostream>
using namespace std;
 
int main() {
       
        double a,b,c,d,e,f,t, x0,y0,x1,y1,x2,y2;
        cout << "Introduceti a,b,c,d,e,f" << endl;
		cout<<"A:"
        cin >> a >> b >> c >> d >> e >> f;
       
        x0=c;
        y0=f;
        x1=c+(0.5*b);
        y1=f+(0.5*e);
        x2=a+b+c;
        y2=d+e+f;
       
        cout << "a0=" << c << "," << f <<endl;
        cout << "a1=" << c + (0.5*b) << "," << f + (0.5*e) << endl;
        cout << "a2=" << a + b + c << "," << d + e + f << endl;
       
        cout << "Dupa marire: " << endl;
       
        cout << "b0=" << x0 << "," << y0 << endl;
        cout << "b1=" << (1.0/3.0)* x0  + (2.0/3.0)*x1 << "," << (1.0/3.0)* y0  + ((2.0/3.0)*y1 ) << endl;
        cout << "b2=" << (2.0/3.0)*x1 + (1.0/3.0)*x2  << "," << (2.0/3.0)*y1 + (1.0/3.0)*y2 << endl;
        cout << "b3=" << x2 << "," << y2 << endl;
       
        return 0;
}