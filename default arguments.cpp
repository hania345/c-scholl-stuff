#include<iostream>
#include<conio.h>
int divide (int a, int b=2)
{
	int r;
	r=a/b;
	return(r);
}
int main()
{
	std::cout<<"result by providing one argument="
	<<divide(12);
	std::cout<<std::endl;
	std::cout<<"result by providing both the arguments="<<divide(20,4);
	getch();
	return 0;
}
