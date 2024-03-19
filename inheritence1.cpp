#include<iostream>
using namespace std;
class Grandparent{
	public:
		home()
		{
			cout<<"\nGrandfather have a home";
		}
};
class Parent:public Grandparent{
	public:
		car()
		{
			cout<<"\nFather have a car";
		}
};
class Child:public Parent{

	public:
		respect()
		{
			cout<<"\nChild have respect";
		}
};

main()
{
	Child obj;
	obj.home();
	obj.car();
	obj.respect();	
		}		
