#include<iostream>
#include<conio.h>
int main()
{
	int marks[50],n,k,pass;
	std::cout<<"enter the number of students(max 50):"
	std::cin>>n;
	std::cout<<"enter the marks,one on ech libe:\n";
	for(k=0;k,n;k++)
	std::cin>>marks[k];
	pass=0;
	for(k=0;k<n;k++)
	if(marks[k]>32)
	pass=pass+1;
	std::cout<<"number of students passed="<<pass;
	getch();
	
}
