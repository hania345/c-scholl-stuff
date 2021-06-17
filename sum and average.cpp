#include<iostream>
#include<conio.h>
int main()
{
	float a,b,c,sum,av;
	std::cout<<"enter three numbers:";
	std::cin>>a>>b>>c;
	sum=a+b+c;
	av=sum/3;
	std::cout<<"\nSum="<<sum;
	std::cout<<"\nAverage="<<av;
	getch();
	return 0;
	}
