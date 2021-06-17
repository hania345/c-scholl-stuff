#include<iostream>
#include<conio.h>
int main()
{
	int i,a[5],temp,j;
	std::cout<<"enter any five numbers:";
	for(i=0; i<=4;i++)
	std::cin>>a[i];
	
	std::cout<<"\nData before sorting:";
	for(j=0; j<=4;j++)
	std::cin>>a[j];
	
	for(i=0;i<=4;i++)
	for(j=0; j<=3;j++)
	if(a[j]>a[j+1])
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		}
		std::cout<<"\nData before sorting:";
	for(j=0; j<=4;j++)
	std::cout<<a[j]<<"";
	getch();
	return 0;
}

