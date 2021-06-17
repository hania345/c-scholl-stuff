#include<iostream>
#include<conio.h>
int main()
{
	float x=6.5;
	float*fpointer;
	fpointer=&x;
	std::cout<<"the address of x="<<&x<<std::endl;
	std::cout<<"the value of x="<<x<<std::endl;
	std::cout<<"the value of fpointer="<<fpointer;
	getch();
	return 0;
}
