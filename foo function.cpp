#include<iostream>
#include<conio.h>
void foo(int y)
{
	std::cout<<"y in foo()="<<y<<std::endl;
	y=6;
	std::cout<<"y in foo()="<<y<<std::endl;
}
int main()
{int x=5;
std::cout<<"x in main() before call="<<x<<std::endl;
foo(x);
std::cout<<"x in main()after call="<<x<<std::endl;
getch();
return 0;
}
