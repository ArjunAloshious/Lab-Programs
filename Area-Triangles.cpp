#include<iostream>

using namespace std;

class ar
{
	public:
		float area(float a)
		{
			return (a*a)*(1.73/4) ;
		}
		float area(float br,float hr)
		{
		    return br*hr*0.5 ;
		}
		int area(int bs,int hs)
		{
		    return (0.5*bs*hs);
		}
};

int main()
{
	ar obj;
	int bs,hs;
	float a,br,hr;
	
	cout<<"Enter side of equilateral triangle(float) : ";
	cin>>a;
	cout<<"Enter base and height of right triangle(float) : ";
	cin>>br>>hr;
	cout<<"Enter base and height of scalene triangle(int) : ";
	cin>>bs>>hs;
	
	cout<<"\n\nArea of equilateral triangle = "<<obj.area(a);
	cout<<"\nArea of right triangle = "<<obj.area(br,hr);
    cout<<"\nArea of scalene triangle = "<<obj.area(bs,hs);
}
