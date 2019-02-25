#include<iostream>
using namespace std;

class Odd
{
	int a;
	public:
		void check(int a)
		{
			if (a%2==0)
				cout<<"Even no\n";
			else
				cout<<"Odd number\n";
		}	
};

int main()
{
	int a;
	Odd obj;
	cout<<"Enter no : ";
	cin>>a; 
	obj.check(a);
}
