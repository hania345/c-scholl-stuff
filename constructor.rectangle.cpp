#include<iostream>
#include<conio.h>
class CRectangle
{
	int width,height;
	public:
	CRectangle (int a,int b)
	{
		width=a;
		height=b;
	}
	int area()
	{
		return (width*height);
	}
};
int main()
{
	CRectangle r1 (13,14);
	CRectangle r2 (15,16);
	std::cout<<"area of Rectangle 1:"<<r1.area()<<std::endl;
	std::cout<<"area of Rectangle 2:"<<r2.area()<<std::endl;
	getch();
	return 0;
}

