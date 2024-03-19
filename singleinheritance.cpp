#include<iostream>
using namespace std;

class Parent{
	public:
		myfun1(){ //parent class,base class
			cout<<"\nThis is Parent Class";
		}
};

class Child : public Parent{
	public:
		myfun2(){ //child class,derived class
			cout<<"\nThis is Child Class";
		}
};

main()
{
	Child obj;
	obj.myfun1();
	obj.myfun2();
}
