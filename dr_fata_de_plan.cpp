#include<iostream>
using namespace std;
 
 int main(){
 double a,b,c,d,x0,y0,z0,l,m,n,x,y,z,t;
 cout<<"a="; 
 cin>>a;
 
 cout<<"b=";
 cin>>b;
 
 cout<<"c="; 
 cin>>c;
 
 cout<<"d=";
 cin>>d;
 
 cout<<"x0=";
 cin>>x0;
 
 cout<<"y0=";
 cin>>y0;
 
 cout<<"z0=";
 cin>>z0;
 
 cout<<"l=";
 cin>>l;
 
 cout<<"m=";
 cin>>m;
 
 cout<<"n=";
 cin>>n;
 t=(double)(-(d-c*z0+b*y0+a*x0))/(a*l+b*m+c*n);
 cout<<endl;
 if(a*l+b*m+c*n==0 && a*x0+b*y0+c*z0+d!=0)
    cout<<"Dreapta este paralela cu planul";
 else if(a*l+b*m+c*n==0 && a*x0+b*y0+c*z0+d==0)
       cout<<"Dreapta este inclusa in plan";
       else if(a*l+b*m+c*n!=0)
             {x=x0+l*t;
              y=y0+m*t;
              z=z0+n*t;
              cout<<"Dreapta intersecteaza planul in punctul cu coordonatele ("<<x<<")("<<y<<")("<<z<<")";}
 cout<<endl;
 system("PAUSE");
 return 0;
 }
