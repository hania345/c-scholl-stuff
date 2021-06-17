#include<stdio.h>
#include<conio.h>
#include<iostream>
using  namespace std;
int main();
int total_bill(int,int,int);
int main()
{
	int bill;
	int candles=125;
	int toys=300;
	int cups=100;
	bill=total_bill(candles,toys,cups);
	std::cout<<"the total bill=Rs."<<bill<<;
	getch();
	return 0;
}
int total_bill(int item1,int item2,int item3)
{
	int total;
	total=item1+item2+item3;
	return total;
}
