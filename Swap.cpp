#include<iostream>
#include<stdlib.h>

using namespace std;

class Swap
{
	public:
		int t,val;
		void swap_value(int a,int b)
		{
			cout<<"\nA and B values after swapping :- ";
			t=a;
			a=b;
			b=t;
			cout<<"\nA = "<<a<<"\tB = "<<b;
		}
		void swap_reference(Swap &a,Swap &b,Swap &q)
		{
			cout<<"\nA and B values after swapping :- ";
			q.val=a.val;
			a.val=b.val;
			b.val=q.val;
			cout<<"\nA = "<<a.val<<"\tB = "<<b.val;
		}
		void swap_address(Swap *a,Swap *b)
		{
			cout<<"\nA and B values after swapping :- ";
			t=a->val;
			a->val=b->val;
			b->val=t;
			cout<<"\nA = "<<a->val<<"\tB = "<<b->val;
		}
};

int main()
{
	int op;
	Swap a,b,c,d;
	while(1)
	{
		cout<<"\n\nEnter A and B values : ";
		cin>>a.val>>b.val;
		cout<<"\n0.Exit\n1.Swap Value\n2.Swap Reference\n3.Swap Address\n";
		cout<<"Enter your choice : ";
		cin>>op;
		switch(op)
		{
			case 0: exit(0);
			case 1:	{
								c.swap_value(a.val,b.val);
								break;
							}
		
			case 2:	{
								c.swap_reference(a,b,d);
								break;
							}		
		
			case 3:	{
								c.swap_address(&a,&b);
								break;
							}
		}
	}
	return 0;
}
