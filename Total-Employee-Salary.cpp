#include<iostream>

using namespace std;

class Employee
{
	public:
		char name[20],designation[20];
		int id,age,basicpay;
		Employee():id(0),age(0),basicpay(0)
		{}
		void read()
		{
			cout<<"Enter name, id, age, basicpay, designation : ";
			cin>>name>>id>>age>>basicpay>>designation;
		}
		void disp()
		{
			cout<<"\nID : "<<id<<"\nAge : "<<age<<"\nBasic pay : "<<basicpay<<"\nDesignation : "<<designation;
		}
};

class Otherincome : public virtual Employee
{
	public:
		int income;
		char source[20];
		Otherincome():income(0)
		{}
		void read1()
		{
			cout<<"Enter income and source : ";
			cin>>income>>source;
		}
		void disp1()
		{
			cout<<"\nIncome : "<<income<<"\nSource : "<<source;
		}
};

class Increment : public virtual Employee
{
	public:
		int inc,exp;
		Increment():inc(0),exp(0)
		{}
		void calc_inc()
		{
			cout<<"\nEnter experience : ";
			cin>>exp;
			if(exp>25)
				inc=inc+5000;
			else if(exp<25)
				inc=inc+2000;
		}
};

class NetSalary : public Increment, public Otherincome
{
	public:
		int totsal;
		NetSalary():totsal(0)
		{}
		void calc_netsal()
		{
			totsal=inc+basicpay+income;
			cout<<"Total Salary = "<<totsal<<endl;
		}
};

int main()
{
	NetSalary ob;
	ob.read();
	ob.read1();
	ob.disp();
	ob.disp1();
	ob.calc_inc();
	ob.calc_netsal();
	return 0;
}
