#include<iostream>
using namespace std;

class myclass{
	
	public:
		int a,b;
		
	myfun()
	{
		cout<<"Enter number : ";
		cin>>a;
	}
	myfun1()
	{
		cout<<"Enter number : ";
		cin>>b;
	}
	myfun2()
	{
		int c;
		cout<<"Addition : "<<a+b;
	}
};

main()
{
	myclass obj;
	obj.myfun();
	obj.myfun1();
	obj.myfun2();
}
