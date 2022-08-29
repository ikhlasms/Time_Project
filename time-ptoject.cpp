#include<iostream>
#include<windows.h>
using namespace std;

string days_of_week[8] = { " ","sat","sun","mon","tue","wed","ther","fri"};
int days_of_month[13] = { 0,31,28,31,30,31,30,31,31,30,30,30,31 };
string months[13] = { " ","jan","feb","mar","apr","may","jun","jul","ags","sep","oct","nov","dec" };


void main() {
	
	int hour, min, sec,weeks_day,month,day,year;

	cout << "Hour:";
	cin >> hour;


	cout << "min:";
	cin >> min;
	while (min > 59 || min < 0)
	{
		cout << "Wrong\n";
		cin >> min;
	}

	cout << "sec:";
	cin >> sec;
	while (sec > 59 || sec < 0)
	{
		cout << "Wrong\n";
		cin >> sec;
	}
	
	cout << " (1)saturday  (2)sunday  (3)monday  (4)tuesday  (5)wednesday  (6)trhesday  (7)friday :";
	cin >> weeks_day;
	while (weeks_day > 7 || weeks_day < 1) {
		cout << "Plz just enter numbers from 1_7\n";
		cin >> weeks_day;
	}

	cout << "day:";
	cin >> day;
	while (day > 32 || day < 0) {
		cout << "Day must be less than 32\n";
		cin >> day;
	}

	cout << "month:";
	cin >> month;
	while (month > 12 || month < 0) {
		cout << "Plz enter numbers from 1_12\n";
		cin >> month;
	}

	cout << "year:";
	cin >> year;
	while (year > 21000 || year < 0) {
		cout << "Year must be less than 21000\n";
		cin >> year;
	}


	for (year; year < 21000; year++) {
		for (month; month < 13; month++) {
			for (day; day < days_of_month[month]+1; day++) {
				for (hour; hour < 24; hour++) {
					for (min; min < 60; min++) {
						for (sec; sec < 60; sec++) {

							cout << hour << ":" << min << ":" << sec;
							cout << endl;
							cout << day << "/" << months[month] << "/" << year <<"\t"<< days_of_week[weeks_day];
							
							Sleep(1000);
							system("cls");
						}
						sec = 0;
					}
					min = 0;
				}
				hour = 0;

				weeks_day++;
				if (weeks_day == 8)
					weeks_day = 1;

			}
			day = 1;
		}
		month = 1;
	}
	system("pause");
}
