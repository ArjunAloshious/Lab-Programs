#include<iostream>
#include<stdlib.h>
#include<cstring>

using namespace std;

class Acc
{
	public :
	  char cusnam[20],type[10];
	  int accno;
	  void read()
	  {
	  	cout<<"Enter customer name : ";
	 		cin>>cusnam;
	 		cout<<"Enter account type : ";
	 		cin>>type;
	 		cout<<"Enter account number : ";
			cin>>accno;
	 	}
};

class Cur_acct : public Acc
{
	public :
		int dep,w;
		float ir,interest,bal;
		Cur_acct():dep(0),w(0),bal(0.0),interest(0.0),ir(0.0)
		{}
		void deposit()
		{
			cout<<"Enter deposit amount : ";
			cin>>dep;
			bal=bal+dep;
		}
		void disp()
		{
			cout<<"\nBalance = "<<bal<<endl;
		}
		void intrs()
		{
			cout<<"Enter interest rate for corresponding time period : ";
			cin>>ir;
			interest=(ir/100)*bal;
			cout<<"Interest = "<<interest<<endl;
			bal=bal+interest;
		}
		void withdrawal()
		{
			cout<<"Enter withdrawal amount : ";
			cin>>w;
			bal=bal-w;
		}
};

class Sav_acct : public Acc
{
	public :
		int dep2,w2;
		float ir2,interest2,bal2;
		Sav_acct():dep2(0),w2(0),bal2(0.0),interest2(0.0),ir2(0.0)
		{}
		void deposit2()
		{
			cout<<"Enter deposit amount : ";
			cin>>dep2;
			bal2=bal2+dep2;
		}
		void disp2()
		{
			cout<<"\nBalance = "<<bal2<<endl;
		}
		void intrs2()
		{
			cout<<"Enter interest rate for corresponding time period : ";
			cin>>ir2;
			interest2=(ir2/100)*bal2;
			cout<<"Interest = "<<interest2<<endl;
			bal2=bal2+interest2;
		}
		void withdrawal2()
		{
			cout<<"Enter withdrawal amount : ";
			cin>>w2;
			bal2=bal2-w2;
		}
};

int main()
{
	int op;
	char ch;
	Cur_acct ob;
	Sav_acct ob2;
	Acc obj;
	do
	{	
		obj.read();
		if(strcasecmp(obj.type,"current")==0)
			op=1;
		else if(strcasecmp(obj.type,"savings")==0)
			op=2;
		else
			cout<<"Invalid type\n";
		switch(op)
		{
			case 1:{ ob.disp();
							 ob.deposit();
							 ob.disp();
							 ob.intrs();
							 ob.disp();
							 ob.withdrawal();
							 ob.disp();
							 break;}
			case 2:{ ob2.disp2();
							 ob2.deposit2();
							 ob2.disp2();
							 ob2.intrs2();
							 ob2.disp2();
							 ob2.withdrawal2();
							 ob2.disp2();
							 break;}
		}
		cout<<"Do you want to continue?(y/n) : ";
		cin>>ch;
	}while(ch=='y');
	return 0;
}
