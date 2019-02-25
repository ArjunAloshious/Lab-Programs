#include<iostream>
using namespace std;

class Pal
{
	public:
		int d=0,rev=0,t=0;
		void palindrome(int p)
		{
			t=p;
			while(p!=0)
			{
				d=p%10;
				rev=(rev*10)+d;	
				p=p/10;
			}
			if(t==rev)
				cout<<"Palindrome\n";
			if(t!=rev)
			  cout<<"Not a palindrome\n";
		}	
};

int main()
{
	int a;
	Pal obj;
	cout<<"Enter no : ";
	cin>>a; 
	obj.palindrome(a);
}
