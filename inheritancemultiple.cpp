#include<iostream>
using namespace std;
class A{
	public:
		string name;
		int rollno;
		
		show()
		{
			cout<<"\nEnter Name : ";
			cin>>name;
			cout<<"\nEnter Roll Number : ";
			cin>>rollno;
		}
};

class B{
	public:
		int m=80,e=95,s=97;
		show1()
		{
			cout<<"\nMath : "<<m;
			cout<<"\nEnglish : "<<e;
			cout<<"\nScience : "<<s;
		}
};

class C:public A,public B{
	public:
		show2()
		{
			int total = m+e+s;
			int avg = total/3;
			
			cout<<"\nTotal Marks : "<<total;
			cout<<"\nAverage Marks : "<<avg;
		}
};
main()
{
	C obj;
	obj.show();
	obj.show1();
	obj.show2();	
}
