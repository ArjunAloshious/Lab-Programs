#include<iostream> 
using namespace std; 
class Prime
{
  public :
	void prime(int n1, int n2)
	{   
		 int flag, i;
		 while(n1<=n2)
		 {
		    flag=0;
		    for(i=2;i<=n1/2;i++) 
		    {
		       if(n1%i==0) 
		       {
		          flag=1;
		          break;
		       }
		    }
		    if (flag==0)
		       cout<<n1<<" ";
		    n1++;
		 }
	}
};

int main() 
{
	 Prime obj;
   int n1,n2;
   cout<<"Enter limits : ";
   cin>>n1>>n2;
   cout<<"Prime numbers between "<<n1<<" and "<<n2<<" are: ";
   obj.prime(n1,n2);
   return 0;
}
