#include<iostream>
#include<conio.h>
class access
{
	int A;
	void getA()
	{
		std::cout<<"i am private member accessible only through public member function"<<std::endl;
	}
	public:
		int B;
		void getB()
		{
			GetA();
			std::cout<<" i am B in public"<<std::endl;
		}
	};
	int main()
	{
		access caccess;
		caccess.B=10;
		caccess.getB();
		getch();
		return 0;
	}

