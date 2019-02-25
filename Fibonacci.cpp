#include<iostream>
using namespace std;

class Fib
{
	int i,n,s=0,t1=0,t2=1;
	public:
		void fibonacci(int n)
		{
			for(i=1;i<=n;i++)
			{
				if(i==1)
					cout<<t1<<" ";
				if(i==2)
					cout<<t2<<" ";
				s=t1+t2;
				t1=t2;
				t2=s;
				cout<<s<<" ";
			}
			cout<<endl;
		}
};

int main()
{
	int a;
	Fib obj;
	cout<<"Enter limit : ";
	cin>>a; 
	obj.fibonacci(a);
}
