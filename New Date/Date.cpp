#include "Date.h"
# include <iostream>
using namespace std;

Date::Date()
{
	fillTable();

	cout << "Ημέρα : " ;	cin >> day;

	while ( !setDay(day) ) /* Όσο η setYear(year) δεν επιστρέφει αληθής ( ότι έδωσε σωστή χρονιά ). */
	{
		cout << "Λάνθασμένη εισαγωγή ημέρας. Ξανά προσπάθησε." << endl << "Ημέρα : ";	cin >> day;
	}


	cout << "Μήνας : " ;	cin >> month;

	while ( !setMonth(month) ) /* Όσο η setYear(year) δεν επιστρέφει αληθής ( ότι έδωσε σωστή χρονιά ). */
	{
		cout << "Λάνθασμένη εισαγωγή μήνα. Ξανά προσπάθησε." << endl << "Μήνας : ";		cin >> month;
	}


	cout << "Χρονιά : ";	cin >> year;
	while ( !setYear(year) ) /* Όσο η setYear(year) δεν επιστρέφει αληθής ( ότι έδωσε σωστή χρονιά ). */
	{
		cout << "Λάνθασμένη εισαγωγή χρονιάς. Ξανά προσπάθησε." << endl << "Χρονιά : ";	cin >> year;
	}
}



Date::Date(int y)
{
	fillTable();
	day=1;
	month=1;
	setYear(y);
}



Date::Date(int d,int m,int y)
{
	fillTable();
	setDay(d);
	setMonth(m);
	setYear(y);
}



void	Date::fillTable()
{
	//oi meres tou mina gia kathe mina
	monthdays[0]=31;
	monthdays[1]=28;
	monthdays[2]=31;
	monthdays[3]=30;
	monthdays[4]=31;
	monthdays[5]=30;
	monthdays[6]=31;
	monthdays[7]=31;
	monthdays[8]=30;
	monthdays[9]=31;
	monthdays[10]=30;
	monthdays[11]=31;
}



bool Date::setYear(int y)
{
	if(y<0) {year=1;return false;}
	else
	{
		year=y;
		return true;
	}
}



bool Date::setMonth(int m)
{
	if(m<0 || m>12) {month=1;return false;}
	else
	{
		month=m;
		return true;
	}
}



bool Date::setDay(int d)
{
	if(d<0 || d>31 || d>monthdays[month-1]) {day=1;return false;}
	else
	{
		day=d;
		return true;
	}
}



int	 Date::getDay()
{
	return day;
}



int	 Date::getMonth()
{
	return month;
}


int	 Date::getYear()
{
	return year;
}



void	Date::nextDay()
{
	++day;
	if(day>monthdays[month-1])
	{
		month++;
		day=1;
		if(month>12)
		{
			month=1;
			year++;
		}
	}
}



void	Date::printDate()
{
	cout<<day<<"/"<<month<<"/"<<year<<endl;
}



bool	Date::sameDate(Date &other)
{
	if(day==other.getDay() && month==other.getMonth() && year==other.getYear())
			return true;
	else
			return false;
}



Date::~Date()
{

}
