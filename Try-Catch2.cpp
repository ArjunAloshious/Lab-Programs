#include<iostream>
#include<stdio.h>

using namespace std;

class Av
{
	float s;
	public:
		class avg
		{};
		float fn(int a,int b,int c,int d)
		{
			s=(a+b+c+d)/4.0;
			return s;
		}
};

int main()
{
	try
	{
		float f;
		int a,b,c,d;
		Av ob;
		cout<<"Enter 4 marks : ";
		cin>>a>>b>>c>>d;
		if(a>100||b>100||c>100||d>100)
			throw(1);
		else
		{
			f=ob.fn(a,b,c,d);
			cout<<"Value is : "<<f<<endl;
		}	
	}
	
	catch(int k)
	{
		cout<<"\nException : Out of Range\n";
	}
}
