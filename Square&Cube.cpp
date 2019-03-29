#include<iostream>

using namespace std;

class Side
{
	protected:
		int s;
	public:
		void input(int n)
		{
			s=n;
		}
};

class Square : public Side
{
	public:
		void sq()
		{
			cout<<"Square = "<<s*s<<endl;
		}
};

class Cube : public Side
{
	public:
	  void cu()
	  {
	  	cout<<"Cube = "<<s*s*s<<endl;
	  }
};

int main()
{
	int n;
	Square s;
	Cube c;
	cout<<"Enter side : ";
	cin>>n;
	s.input(n);
	s.sq();
	c.input(n);
	c.cu();
	return 0;
}
