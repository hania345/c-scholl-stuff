#include<iostream>
#include<conio.h>
int main(){
	int n,r;
      std::cin>>n;
	r=n%2;
	if (r==0)
	std::cout<<n<<"is even number";
	else
	std::cout<<n<<"is odd number";
	getch();
}
