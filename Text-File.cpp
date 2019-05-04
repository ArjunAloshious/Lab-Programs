#include<iostream>
#include<fstream>

using namespace std;

class Student
{
	public:
		int id,rno,m1,m2,m3;
		char name[20];
		void read()
		{
			cout<<"Enter name, id, roll no, marks of 3 subjects :\n";
			cin>>name>>id>>rno>>m1>>m2>>m3;
		}
		void disp()
		{
			cout<<"\n\nDetails are :-\n"<<"Name : "<<name<<"\nID : "<<id<<"\nRoll No : "<<rno;
			cout<<"\nMarks of Subject 1 : "<<m1<<"\nMarks of Subject 2 : "<<m2<<"\nMarks of Subject 3 : "<<m3<<endl; 
		}
};


int main()
{
	char ch;
	fstream p;
	Student obj;
	ifstream q;
	do
	{
		p.open("student.txt",ios::out|ios::trunc);
		q.open("student.txt",ios::in);	
		obj.read();
		p.write((char *)&obj,sizeof(obj));
		while(!q.eof())
		{
			obj.disp();
			q.read((char *)&obj,sizeof(obj));
		}
		cout<<"\nDo you want to continue(y/n) ? : ";
		cin>>ch;
		p.close();
		q.close();
	}while(ch=='y'||ch=='Y');
	return 0;
}
