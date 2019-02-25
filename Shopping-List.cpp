#include<iostream>
using namespace std;

class List
{
	public:
		int code,p,tp=0;
		void input()
		{
			cout<<"Enter code no. and price : ";
			cin>>code>>p;
			tp=tp+p;
		}
		void add(int a)
		{
			tp=tp+a;
			count++;
			
		}
		void remove(int x)
		{
			count--;
			tp=tp-x;
		}
		void disp()
		{
			for(int i=0;i<count;i++)
				cout<<l[i]<<" ";
			cout<<"Total cost = "<<tp;
		}
};

int main()
{
	
}
