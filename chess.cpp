#include<iostream>
#include<conio.h>
int main()
{
	int size=8;
	
	for(int i=0;i<=size;i++)
	{
		for(int j=0;j<=size;j++)
		if((i+j)%2==0)
		std::cout<<"#";
		else
		std::cout<<"";
		
		std::cout<<"\n";
		
	}
	getch();
	return 0;
}
