#include<iostream>
#include<conio.h>
void main()
{
	int x,y,sum,prod;
	cout<<"\nEnter first number:";
	cin>>x;
	cout<<"\nenter second number:";
	cin>>y;
	if (x>0)
	{
		sum=x+y;
		prod=x*y;
		cout<<"\nsum="<<sum<<endl;
		cout<<"\nproduct="<<prod;

	}
	getch();
}
