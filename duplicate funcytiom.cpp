#include<iostream>
#include<conio.h>
void duplicate (int& a,int& b,int& c)
{
	a=a*2;
	b=b*2;
	c=c*2;
}
int main()
{
	int x=1 , y=3 , z=7;
	std::cout<<"values of x,y and z in main() before calling function\n";
	std::cout<<"x="<<x<<",y="<<y<<",z="<<z<<std::endl;
	duplicate (x,y,z);
	std::cout<<"values of x,y and z in main() after calling function\n";
	std::cout<<"x="<<x<<",y="<<y<<",z="<<z;
	getch();
	return 0;
}
