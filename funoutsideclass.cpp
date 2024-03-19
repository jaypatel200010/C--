//function outside class
#include<iostream>
using namespace std;
class One{
	public:
	void two();
};
void One::two(){
	cout<<"Hii";
}
int main()
{
	One obj;
	obj.two();
}
