#include<iostream>

using namespace std;

class Array
{
	int mini,maxi;
	public:
		Array():mini(0),maxi(0)
		{}
		void max(int a[],int n)
		{
			maxi=a[0];
			for(int i=1;i<n;i++)
				if(a[i]>maxi)
					maxi=a[i];
			cout<<"\nMaximum element = "<<maxi;
		}
		void min(int a[],int n)
		{
			mini=a[0];
			for(int i=1;i<n;i++)
				if(a[i]<mini)
					mini=a[i];
			cout<<"\nMinimum element = "<<mini<<endl;
		}
};

int main()
{
	int a[30],n,i;
	Array *ob=new Array;
	cout<<"Enter array size : ";
	cin>>n;
	cout<<"Enter array elements : ";
	for(i=0;i<n;i++)
		cin>>a[i];
	ob->max(a,n);
	ob->min(a,n);	
	return 0;
}
