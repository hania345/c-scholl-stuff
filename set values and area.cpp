#include<iostream>
#include<conio.h>
class Crectangle
{
	private:
		int X,Y;
		public:
		void set_values(int a,int b)
		{
			X=a;
			Y=b;
		}
		int area()
		{
			std::cout<<"area of the rectangle="<<(X*Y);
		}
	};
	int main()
	{
		Crectangle R1;
		R1.set_values(44,22);
		R1.area();
		getch();
		return 0;
			
}
