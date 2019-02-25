#include<iostream>
using namespace std;

class Acc
{
	public:
		int no,bal,x,y;
		char name[20],type[20];
		void acc()
		{
			x=y=0;
			no=0;
			bal=0;
			cout<<"Enter Name : ";
			cin.get(name,20);
		}
		void dep()
		{
			cout<<"Enter amount to deposit : ";
			cin>>x;
			bal=bal+x;
		}
		void with()
		{
			cout<<"\nBalance in acc : "<<bal;
			cout<<"\nEnter amount to withdraw : ";
			cin>>y;
			bal=bal-y;
		}
		void disp()
		{
			cout<<"\nName : "<<name;
			cout<<"\nBalance in acc : "<<bal;
		}
};

int main()
{
	Acc obj;
	obj.acc();
	obj.dep();
	obj.with();
	obj.disp();
}
