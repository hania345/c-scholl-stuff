#include<iostream>
#include<conio.h>
#include<fstream>
#include<iostream>
#include <iosfwd>
#define MAX10
using namespace std;
void foo();
class student
{
	private:
		char name[30];
		int age;
		int sclass;
		public:
			void getdetails(void);
			void putdetails(void);
		};
		void student::getdetails(void)
		{
			std::cout<<"enter name:";
			std::cin>>name;
			std::cout<<"enter age:";
			std::cin>>age;
			std::cout<<"enter sclass:";
			std::cin>>sclass;
		}
		void student::putdetails(void)
		{
			std::cout<<"name:"<<name;
			std::cout<<"age:"<<age;
			std::cout<<"sclass:"<<sclass;
		}
		int main()
		{
			student std::[MAX];
			fstream file;
			int n,loop;
			std::cout<<"enter total number of students:";
			std::cin>>n;
			file.opem("c:||sdata.txt",ios::out);
			std::cout<<"writing student information to the file:-\n";
			std::cout<<"enter"<<n<<"students details to the file\n";
			for (loop=0;loop<n;loop++){
				std::cout<<"enter details of student"<<loop+1<<":\n";
				std[loop].getdetails()
				file.write((char*)&std[loop],sizeof(std[loop]));
			}
			file.close();
			file.open("c:\\sdata.txt",ios::in);
			for (loop=0;loop<n;loop++){
				std::cout"\n(student"<<(loop+1)<<"):";
				file.read((char*)&std[loop],sizeof(std[loop]));
				std[loop].putdetails();
				
			}
			file.close();
			getch();
			return 0;
		}
}
