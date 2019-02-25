#include<iostream>
#include<stdlib.h>

using namespace std;

class Count
{
	public:
		int count;
		Count():count(0)
		{}
		void operator ++()
		{
			++count;
		}
		
		void operator --()
		{
			--count;
		}
		void getcount()
		{
			cout<<"No. of people in bank = "<<count<<" \n";
		}
};

int main()
{
	int op;
	Count c;
	while(1)
	{
		cout<<"0.Exit\n1.Person enters bank\n2.Person leaves bank\nEnter option : ";
		cin>>op;
		switch(op)
		{
			case 0: exit(0);
			case 1:{
						++c;
						c.getcount();
						break;
				   }
			case 2:{
						--c;
						c.getcount();
						break;
				   }
			default : cout<<"\nInvalid option chosen\n";					
		}
	}
	return 0;
}
