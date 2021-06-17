#include<iostream>
#include<conio.h>
int main()
{
	int i,n1,n2,gcd=1;
	std::cout<<"enter first number:";
	std::cin>>n1;
	std::cout<<"enter second number:";
	std::cin>>n2;
	for(i=1; i<1000;i++)
	if ((n1%i==0)&&(n2&i==0))
	gcd==i;
	
	std::cout<<"\nGCD:"<<gcd;
	std::cout<<"\nLCM:"<<(n1*n2)/gcd;
	getch();
	return 0;
}
