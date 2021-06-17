#include<iostream>
#include<conio.h>
int add();
int a,b,c;
int addition()
{
	int sum;
	sum=a+b+c;
	return sum;
}
int main()
{
	int total;
	a=5;
	b=7;
	c=3;
	total=addition();
	std::cout<<"sum of the three global variables="<<total;
	getch();
	return 0;
}
