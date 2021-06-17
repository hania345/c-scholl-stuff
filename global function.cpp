#include<iostream>
#include<conio.h>
void print()
{
	std::cout<<"this is global function";
}
int main()
{
	print();
	std::cout<<std::endl;
	print();
	getch();
	return 0;
}
