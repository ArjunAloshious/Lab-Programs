#include<iostream>

using namespace std;

class Base
{
	public:
		int b,h,l,br,ar,ar2;
};
	
class TRIANGLE : public Base 
{
	public :
		void read1()
		{
			cout<<"Enter breadth and height : ";
			cin>>b>>h;
			ar=0.5*b*h;
			cout<<"Area of Triangle = "<<ar<<endl;
		}
};

class RECTANGLE : public TRIANGLE
{
	public :
		void read2()
		{
			cout<<"Enter length and breadth : ";
			cin>>l>>br;
			ar2=l*br;
			cout<<"Area of Rectangle = "<<ar2<<endl;
		}
};

int main()
{
	int ch;
	RECTANGLE ob;
	cout<<"1.Triangle\n2.Rectangle\nEnter your choice : ";
	cin>>ch;
	if(ch==1)
		ob.read1();
	else if (ch==2)
		ob.read2();
	else
		cout<<"Invalid";	
	return 0;
}
