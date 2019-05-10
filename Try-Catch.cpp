#include<iostream>
#include<stdio.h>

using namespace std;

class Div
{
	public:
		class Bz
		{};
		void div(int a,int b)
		{
			if(b==0)
				throw Bz();
		}
};

int main()
{
	try
	{
		int a,b;
		Div ob;
		cout<<"Enter 2 nos : ";
		if(!(cin>>a>>b))
			throw(1);	
		ob.div(a,b);
		cout<<"Result = "<<(float)a/b;
	}
	
	catch(int k)
	{
		cout<<"\nNot integer data type\n";
	}

	catch(Div::Bz)
	{
		cout<<"\nDivision by zero not allowed\n";
	}
}
