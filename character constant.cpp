#include<iostream>
#include<conio.h>
void showgender(char ch)
{
	std::cout<<"the gender marker you passed is:"<<ch<<std::endl;
}
int main()
{
	showgender('F');
	getch();
	return 0;
}
