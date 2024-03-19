#include<iostream>
using namespace std;

class Myclass{
	public:
		Myclass() //constructor
		{
			cout<<"\nWelcome to my website!!";
		}
		fun()
		{
			int n,i,fac=1;
			
			cout<<"\nEnter Number : ";
			cin>>n;
			
			for (i=1;i<=n;i++)
			{
				fac = fac*i;
				
			}
			cout<<"\nFactorial is : "<<fac;
		}
		
		~Myclass() //destructor
		{
			cout<<"\nThank you for using our site!!";
		}
};
main()
{
	Myclass obj;
	obj.fun();
}
