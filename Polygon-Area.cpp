#include <iostream>
#include<stdlib.h>

using namespace std;

class Polygon
{
	public:
		int l,br,ba,h;
		void read()
		{
			cout<<"\nEnter length and breadth : ";
			cin>>l>>br;
		}
		void read2()
		{
   		cout<<"\nEnter base and height : ";
			cin>>ba>>h;
		}
		virtual void area()
		{
			cout<<"Area of polygons : ";
		}
};

class Rectangle : public Polygon
{
	public:
		void area()
		{
		 cout<<"Area : "<<l*br;
		}	
};

class Triangle : public Polygon
{
	public:
		void area()
		{
			cout<<"Area = "<<0.5*ba*h;
		}	
};

int main()
{
	Polygon *P;
	Rectangle r;
	Triangle t;
	
	int op;
	char ch;
	do{
	cout<<"0.Exit\n1.Triangle\n2.Rectangle\n";
	cout<<"Enter op :";
	cin>>op;
	
	
	switch(op)
	{
		case 0:exit(0);
		case 1: {		P=&t;
								P->read2();
								P->area();
								break;
						}
		case 2: {
								P=&r;
								P->read();
								P->area();
								break;
						}
		default:{ cout<<"Invalid"; break; }
	}
	cout<<"\nDo you want to continue(y/n) ? : ";
	cin>>ch;
	}while(ch=='y'||ch=='Y');
	return 0;
}
