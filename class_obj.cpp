#include<iostream>
using namespace std;
class One{
	public:
	int num;
	string name;
};
int main()
{
	One obj;
	obj.num=15;
	obj.name="HII";
	cout<<obj.num<<endl;
	cout<<obj.name<<endl;
	
	One obj1;
	obj1.num=12;
	obj1.name="Hello";
	cout<<obj1.num<<endl;
	cout<<obj1.name;
}
