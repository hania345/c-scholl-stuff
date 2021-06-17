#include<iostream>
#include<conio.h>
class ConstTest
{
	public:
		ConstTest()
		{
			std::cout<<"i am Constructor";
		}
	};
	int main()
	{
		ConstTest CT;
		getch();
		return 0;
	}

