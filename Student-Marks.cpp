#include<iostream>
using namespace std;

class STUDENT
{
	public:
		int USN,x,y;
		float av,m1,m2,m3;
		char name[20];
		void getdata()
		{
			av=0;
			cout<<"\nEnter name : ";
			cin>>name;
			cout<<"Enter USN : ";
			cin>>USN;
			cout<<"Enter marks of 3 tests : ";
			cin>>m1>>m2>>m3;			
		}
		void aver()
		{
			int a[3];
			a[0]=m1;a[1]=m2;a[2]=m3;
			if(a[0]>a[1]&&a[0]>a[2])
			{
				x=a[0];
				a[0]=a[1];a[1]=a[2];
			}
			else if(a[1]>a[0] && a[1]>a[2])
			{
				x=a[1];
				a[1]=a[2];
			}
			else if(a[2]>a[0] && a[2]>a[1])
			{
				x=a[2];
			}
			if(a[0]>a[1])
				y=a[0];
			else
				y=a[1];
			av=(x+y)/2;
		}
		void disp()
		{
			cout<<"\n\nUSN : "<<USN;
			cout<<"\nName : "<<name;
			cout<<"\nAverage Marks : "<<av;
		}
};

int main()
{
	int n;
	STUDENT obj[10];
	cout<<"Enter no. of students : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		obj[i].getdata();
		obj[i].aver();
	}

	for(int i=0;i<n;i++)
		obj[i].disp();
}
