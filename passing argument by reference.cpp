#include<iostream>
#include<conio.h>
void addone(int&y)
{
	y++;
}
int main()
{
	int x=55;
	std::cout<<"x in main() before call="<<x<<std::endl;
	addone(x);
	std::cout<<"x in main() after call="<<x<<std::endl;
	getch();
	return 0;
	}
