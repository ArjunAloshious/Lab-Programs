#include<iostream>
#include<math.h>
using namespace std;

class Root
{
	float x1,x2;
	public:
		void root(float a,float b,float c,float d)
		{
			if(d>0)
			{	x1=((-b)+sqrt(d))/(2*a);
				x2=((-b)-sqrt(d))/(2*a);
				cout<<"Real and distinct : "<<x1<<" "<<x2;
		  }
		  if(d==0)
			{	x1=((-b)+sqrt(d))/(2*a);
				cout<<"Real and same : "<<x1<<" "<<x1;	
			}
			if(d<0)
			{	x1=(-b)/(2*a);
				x2=sqrt(-d)/(2*a);
				cout<<"Roots are complex and different : "<<x1<<" "<<x2;
			}
		}	
};

int main()
{
	float a,b,c,d,n1,n2;
	Root obj;
	cout<<"Enter coefficients : ";
	cin>>a>>b>>c;
	d=(b*b)-(4*a*c); 
	obj.root(a,b,c,d);
}
