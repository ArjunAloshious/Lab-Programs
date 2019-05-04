#include<iostream>
#include<fstream>

using namespace std;

class Arms
{
	public:
		int value;
		int d,temp,sum;
		Arms():d(0),temp(0),sum(0)
		{}
		void get1()
		{
			cout<<"Enter a number : ";
			cin>>value;
		}
		void put1()
		{
			temp=value;
			while(temp!=0)
			{
		    d=temp%10;
		    sum=sum+(d*d*d);
		    temp=temp/10;
			}
			if(value==sum)
				cout<<endl<<value<<" is an armstrong number\n";
			else
				cout<<endl<<value<<" is not an armstrong number\n";
		}
};

int main()
{
	Arms obj;
	ofstream f;
	f.open("num.dat");
	char ans='y';
	while(ans=='y' || ans=='Y')
	{
		obj.get1();
		f.write((char *)&obj, sizeof(obj));
		cout<<"\nWant to enter more ? (y/n)..";
		cin>>ans;
	}
	f.close();
	ifstream p;
	p.open("num.dat",ios::in);
	p.read((char *)&obj, sizeof(obj));
  while(!p.eof())
	{
		obj.put1(); 	
		p.read((char *)&obj, sizeof(obj));
	}
	p.close();
	return 0;
}
