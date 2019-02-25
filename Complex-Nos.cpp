#include<iostream>
using namespace std;

class Complex
{
	public:
		int r,i;
		void read()
		{
			cout<<"Enter real and imaginary part : ";
			cin>>r>>i;
		}
		Complex operator +(Complex z)
		{
			Complex t;
			t.r=r+z.r;
			t.i=i+z.i;
			return t;
		}
};

int main()
{
	Complex c1,c2,c3;
	c1.read();
	c2.read();
	c3=c1+c2;
	cout<<"Sum = "<<c3.r<<" + i"<<c3.i<<endl;
	return 0;
}
