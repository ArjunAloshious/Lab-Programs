#include<iostream>
using namespace std;

class STUDENT
{
	public:
		int USN,x,y,a[15];
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
			float a[5],f,s,t;
			a[0]=m1;a[1]=m2;a[2]=m3;			
			f=s=t=0.0;
			for(int i=0;i<3;i++)
			{
				if(a[i]>f)
				{	
					t=s;
					s=f;
					f=a[i];
				}
				else if(a[i]>s)
				{
					t=s;
					s=a[i];
				}
				else if(a[i]>t)
					t=a[i];
			}
			av=(f+s)/2;
	 	}
		void disp()
		{
			cout<<"\n\nUSN : "<<USN;
			cout<<"\nName : "<<name;
			cout<<"\nAverage Marks : "<<av<<endl;
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
