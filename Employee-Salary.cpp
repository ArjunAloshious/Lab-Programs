#include<iostream>
using namespace std;

class EMPLOYEE
{
	public:
		float no,DA,IT,netsal,basic;
		char name[20];
		void getdata()
		{
			cout<<"Enter name : ";
			cin>>name;
			cout<<"Enter emp no, basic and net salary : ";
			cin>>no>>basic>>netsal;
		}
		void comp()
		{
			DA=(0.52*basic);
			IT=(0.3*netsal);
		}
		void disp()
		{
			cout<<"\nName : "<<name;
			cout<<"\nEmp no : "<<no;
			cout<<"\nBasic : "<<basic;
			cout<<"\nNet Salary : "<<netsal;
			cout<<"\nDA : "<<DA;
			cout<<"\nIncome Tax : "<<IT;
		}
};

int main()
{
	int N;
	EMPLOYEE EMP[15];
	cout<<"Enter no. of employees : ";
	cin>>N;
	for(int i=0;i<N;i++)
	{
		EMP[i].getdata();
	}	
	for(int i=0;i<N;i++)
	{
		EMP[i].comp();
	}	
	for(int i=0;i<N;i++)
	{
		EMP[i].disp();
	}
}
