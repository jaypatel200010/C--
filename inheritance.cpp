//inheritance
#include<iostream>
using namespace std;
class One{
	public:
	void three(){
		cout<<"Hii";
	}
};
class two : public One{
	public:
		void four(){
			cout<<"Hello";
		}
};
int main()
{
	two obj;
	obj.three();
	obj.four();
}
