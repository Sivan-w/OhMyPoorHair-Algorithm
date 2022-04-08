#include<iostream>
using namespace std;

int main()
{
	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int b[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int year = 2000;
	int mile = 0;
	int week = 6;
	int month = 1;
	int day = 1;
	while (year!=2020||month!=10||day!=2)
	{
		if (week == 1 || day == 1)
			mile += 2;
		else
			mile += 1;
		if (year%400==0||(year % 4 == 0 && year % 100 != 0))
		{
			if (day == b[month-1])
			{
				day = 1;
				if (month == 12)
				{
					month = 1;
					year++;
				}
				else
				{
					month++;
				}
			}
			else
			{
				day++;
			}
		}
		else
		{
			if (day == a[month-1])
			{
				day = 1;
				if (month == 12)
				{
					month = 1;
					year++;
				}
				else
				{
					month++;
				}
			}
			else
			{
				day++;
			}
		}
		if (week == 7)
			week = 1;
		else
			week++;
		
	}cout << mile << endl<<week;
	return 0;
}