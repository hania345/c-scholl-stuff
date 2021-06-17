#include<iostream>
#include<conio.h>
int multiply (int a,int b)
{
	return (a*b);
}
float multiply (float a, float b)
{
	return (a*b);
}
int main()
{
	std::cout<<"output of integers="<<multiply(4,30)<<std::endl;
	std::cout<<"output of floats="<<multiply(3.5,4.5);
	getch();
	return 0;
}
