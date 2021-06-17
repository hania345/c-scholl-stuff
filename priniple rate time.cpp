#include<iostream>
#include<conio.h>
int main()
{
	float p,r,t,i;
	
	std::cout<<"Enter Principle(amount):";
	std::cin>>p;
	std::cout<<"enter rate:";
	std::cin>>r;
	std::cout<<"enter time:";
	std::cin>>t;
	
	i=(p*r*t)/100;
	std::cout<<"simple interest is:"<<i;
	getch();
	return 0;
			
}

