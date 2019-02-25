#include<iostream>
using namespace std;

class List
{
	public:
		int code,p;
		void input()
		{
			cout<<"\nEnter code no. and price : ";
			cin>>code>>p;
		}
		void add()
		{
			cout<<"\nEnter code no. and price : ";
			cin>>code>>p;
		}
		void disp()
		{
			cout<<"\nCode No : "<<code<<"\nPrice : "<<p;	
		}
};

int main()
{
	int i,j,n,m,c,f=0,tp=0;
	List obj[25];
	cout<<"Enter no. of items : ";
	cin>>n;
	for(i=0;i<n;i++)
		obj[i].input();
	for(i=0;i<n;i++)
		obj[i].disp();
	cout<<"\nHow many items do you wish to add? : ";
	cin>>m;
	for(i=n;i<(n+m);i++)
		obj[i].add();
	for(i=0;i<(n+m);i++)
		obj[i].disp();
	cout<<"\nCode no. of item to be deleted : ";
	cin>>c;
	for(i=0;i<(n+m);i++)
	{
		if(obj[i].code==c)
		{
			f=1;
			j=i;
		}
	}
	if(f==0)
	  cout<<"\nItem not in list\n";
	else
	{
		obj[j].code=NULL;
		obj[j].p=NULL;
		for(i=0;i<(n+m);i++)
		{
			obj[i].disp();
			tp=tp+obj[i].p;
		}
		cout<<"\nTotal Value of order : "<<tp<<endl;
	}
	return 0;
}
