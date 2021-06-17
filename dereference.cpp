#include<iostream>
#include<conio.h>
int main()
{
int n=200;
int *pn;
pn=&n;
int valueN;
valueN=*pn;
std::cout<<"the address of n="<<&n<<std::endl;
std::cout<<"the value of n="<<n<<std::endl;
std::cout<<"the value of pn="<<pn<<std::endl;
std::cout<<"the value of (*Pn)="<<(*pn)<<std::endl;
std::cout<<"the value of valueN="<<valueN;
getch();
return 0;
}
