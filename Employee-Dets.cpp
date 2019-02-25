#include<iostream>
using namespace std;

class EMPLOYEE
{
	public:
		int EMPCODE;
		char EMPNAME[20];
		void getdata()
		{
			
			cout<<"\nEnter name : ";
			cin>>EMPNAME;
			cout<<"Enter code : ";
			cin>>EMPCODE;
		}
		void disp()
		{
			cout<<"\nName : "<<EMPNAME;
			cout<<"\nCode : "<<EMPCODE;
		}
};

int main()
{
	int n;
	EMPLOYEE EMP[15];
	cout<<"Enter no. of employees : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		EMP[i].getdata();
	}	
	for(int i=0;i<n;i++)
	{
		EMP[i].disp();
	}
}
