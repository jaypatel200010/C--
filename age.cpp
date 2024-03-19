#include<iostream>
using namespace std;

main()
{
	int a; //data memebers
	
	cout<<"Enter Age : ";
	cin>>a;
	
	if(a>=100)
	{
		cout<<"Invalid Age!!!";
	}
	else if(a>=18)
	{
		cout<<"Eligible for vote";
	}
	else
	{
		cout<<"Not Eligible for vote";
	}
}
