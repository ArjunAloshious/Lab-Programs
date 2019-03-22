#include<iostream>

using namespace std;

int i,j;

class Student
{
	public:
		int rno;
		void read1()
		{
			cout<<"Enter roll no : ";
			cin>>rno;
		}
};

class Test : public Student
{
	public:
		int n,subscore[10];
		void read2()
		{
			cout<<"\nEnter no. of subjects : ";
			cin>>n;
			cout<<"Enter subject scores : ";
			for(i=0;i<n;i++)
				cin>>subscore[i];
		}
};

class Sports : public Test
{
	public:
		int m,score[10];
		void read3()
		{
			cout<<"\nEnter no. of sports events : ";
			cin>>m;
			for(i=0;i<m;i++)
				cin>>score[i];
		}
};	

class Result : public Sports
{
	int sum1,sum2;
	public:
	Result():sum1(0),sum2(0)
	{}
	void fn()	
	{
		for(i=0;i<n;i++)
			sum1=sum1+subscore[i];
		for(j=0;j<m;j++)
			sum2=sum2+score[j];
		cout<<"\n\nSum of Subject Scores = "<<sum1<<"\nSum of Sports Scores = "<<sum2<<endl;
	}
};

int main()
{
	Result obj;
	obj.read1();
	obj.read2();
	obj.read3();
	obj.fn();
	return 0;
}	
