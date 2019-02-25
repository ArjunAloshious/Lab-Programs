#include<iostream>
using namespace std;

class Charge
{
	public:
		float un,price;
		char name[10];
		Charge():price(0)
		{ } 
		void inp()
		{
			cout<<"Enter name and units consumed : ";
			cin>>name>>un;
		}
		void calc()
		{
			if(un>=0 && un<=100)
				price=50+(un*60);
			else if(un>100 && un<=300)
				price=50+(un*80);
			else if(un>300)
			{
				price=50+(un*90);
				price=0.15*price;
			}
			else
				cout<<"\nInvalid\n";
		}
		void disp()
		{
			cout<<"\nName : "<<name<<"\nUnits consumed : "<<un<<"\nCharge : Rs."<<price<<endl;
		}
};

int main()
{
	Charge c;
	c.inp();
	c.calc();
	c.disp();
	return 0;
}
