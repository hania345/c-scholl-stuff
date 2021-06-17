#include<iostream>
#include<conio.h>
inline int min(int a,int b)
{
	return (a<b ? a : b);
	
}
int main()
{
	std::cout<<"minimum out of 13 and 32 is:"<<min(13,32);
	std::cout<<"\nminimum out of 34 and 65 is:"<<min(34,65);
	getch();
	return 0;
	
}
