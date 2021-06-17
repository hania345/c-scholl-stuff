#include<iostream>
#include<conio.h>
int main()
{
	int a[5],k,total;
	float avg;
	for(k=0;k<5;k++)
	{
		std::cout<<"enter a number:";
		std::cin>>a[k];
	}
	total=0;
	for(k=0;k<5;k++)
	total=total+a[k];
	avg=total/5;
	std::cout<<"\ntotal="<<total<<std::endl;
	std::cout<<"average="<<avg<<std::endl;
	getch();
}
