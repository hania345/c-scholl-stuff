#include<iostream>
using namespace std;
int sum (int x,int y);
int main()
{
int a=10;
int b=20;
int c=sum(a,b);
std::cout<<c;
}
int sum (int x,int y)
{
	return (x+y);
}
