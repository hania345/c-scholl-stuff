#include<iostream>
#include<conio.h>
int main ()
{
	float sub1,sub2,sub3,sub4,sub5,perc,total;
	std::cout<<"enter the marks obtained in five subjects:";
	std::cin>>sub1>>sub2>>sub3>>sub4>>sub5;
	
	total=sub1+sub2+sub3+sub4+sub5;
	perc=(total/50)*100;
	std::cout<<"\nThe Percentage marks are:"<<perc<<"%";
	getch();
	return 0;
}
