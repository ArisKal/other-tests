/*
* date.cpp
*
*  Created on: 7 Ìáñ 2015
*      Author: sheridan
*/
#include <iostream>
#include "date.h"

using namespace std;




date::date()
{
	day = 1;
	month = 1;
	year = 1;
}



void date::initDate()
{
	
	cout << "Δώσε την ημέρα : "; cin >> day ;
	if ( !setDay(day) ) 
		day = 1;

	cout << "Δώσε τon μήνα : "; cin >> month ;
	if ( !setMonth(month) ) 
		month = 1;

	cout << "Δώσε την χρονιά : "; cin >> year ;
	if ( !setYear(year) ) 
		year = 1;
} 



bool	date::setDay(int d)
{
	if (d<0 || d>31) return false;
	day = d;
	return true;
}



bool	date::setMonth(int m)
{
	if (m<0 || m>12) return false;
	month = m;
	return true;
}



bool	date::setYear(int y)
{
	if (year<0) return false;
	year = y;
	return true;
}



int		date::getDay()
{
	return day;
}



int	date::getMonth()
{
	return month;
}



int	date::getYear()
{
	return year;
}



void date::printDate()
{
	cout << day << "/" << month << "/" << year << endl;
}



bool date::isLeap(){
/* By : http://el.wikipedia.org/wiki/%CE%94%CE%AF%CF%83%CE%B5%CE%BA%CF%84%CE%BF_%CE%AD%CF%84%CE%BF%CF%82 */

	if ( year % 4 == 0)
		{
		if (year % 100 != 0)
			return true; /* Είναι δίσεκτο. */
		else
			return false;
		}
		
	else 
		{
		if (year % 400 == 0) /* Και πάλι είναι δίσεκτο. */
			return true;
		else
			return false;
		}


}



void date::nextDate(){
	if (isLeap() == true && month == 2 && day == 28){
		cout << day + 1 << "/" << month << "/" << year << endl;
	}
	if (isLeap() == false && month == 2 && day == 28){
		cout <<  1 << "/" << month+1 << "/" << year << endl;

	}
	
	
}



date::~date()
{

}

