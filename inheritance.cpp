#include<iostream>
#include<conio.h>
class A
{
	public:
		void showa()
		{
			std::cout<<"i am in base class A"<<std::endl;
		}
	};
	class B:public A
	{
		public:
			void showb()
			{
				std::cout<<"i am in derived class B"<<std::endl;
			}
	};
	int main()
	{
		B b1;
		b1.showa();
		b1.showb();
	getch();
	return 0;	
	}
