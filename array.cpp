#include<iostream>
using namespace std;

class myclass{
	
	public:
		int a[5],i,j,temp;
		
	myfun()
	{
		for(i=0;i<5;i++)
		{
			cout<<"Enter number : ";
			cin>>a[i];
		}
	}
	myfun1()
	{
		for(i=0;i<5;i++)
		{
			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(a[i]<a[j])
					{
						temp = a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
			for(i=0;i<5;i++)
			{
				cout<<"\nAscending : "<<a[i];
			}
		}
	}
	
	myfun2()
	{
		for(i=0;i<5;i++)
		{
			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(a[i]>a[j])
					{
						temp = a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
			for(i=0;i<5;i++)
			{
				cout<<"\nDescending : "<<a[i];
			}
		}
	}
};


main()
{
	myclass obj;
	obj.myfun();
	obj.myfun1();
	obj.myfun2();
}
