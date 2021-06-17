#include<conio.h>
#include<iostream>
void demo();
void demo()
{
	auto int var1=0;
	static int var2=0;
	std::cout<<"automatic/local variable="<<var1<<","<<"static variable="<<var2<<std::endl;
	++var1,++var2;
}
int main()
{
	int i=0;
	while(i<3)
	{demo();i++;}
	getch();
	return 0;
	
}

