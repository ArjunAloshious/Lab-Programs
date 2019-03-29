#include<iostream>

using namespace std;

class Employee
{
	protected:
		char name[20];
		int sal,exp;
};

class Department : public Employee
{
	public:
		char dept_name[20];
		void read()
		{
			cout<<"\nEnter name, salary, experience and dept name : \n";
			cin>>name>>sal>>exp>>dept_name;
		}
};

class Senior : public Department
{
	public:
	  void disp()
	  {
	  	if (exp>10)
	  		cout<<"\nName : "<<name<<"\nSalary : "<<sal<<"\nExperience : "<<exp<<"\nDepartment : "<<dept_name<<endl;
	  }
};

int main()
{
	Senior ob[5];
	for(int i=0;i<5;i++)
		ob[i].read();
	cout<<"\n\nEmployee details are :- \n";
	for(int i=0;i<5;i++)
		ob[i].disp();
	return 0;
}
