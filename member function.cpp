#include<iostream>
#include<conio.h>
class date 
{
	public:
	int month;
	int day;
	int year;
	void setdate (int nday,int nmonth,int ntesr)
	{
		day=nday;
		month=nmonth;
		Year=nYear;
	}
	void showdate()
	{
		std::cout<<"day of birth:"<<day<<std::endl;
		std::cout<<"month of birth:"<<month<<std::endl;
		std::cout<<"year of birth:"<<year
      }
	};
	int main()
	{
		Date d1;
		d1.Setdate(21,07,2010);
		d1.ShowDate();
	}
	getch();
	return 0;
}

