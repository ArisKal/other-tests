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



bool date::isLeap()
{
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


	/* 
	Ή με αυτό τον τρόπο σε μια μόνο γραμμή : 
	return ( ( (year % 4 == 0) && (year % 100 != 0) )  || (year % 400 == 0) )
	*/


}



void date::nextDate()

	{
	
	day++; /* Απλά αυξάνω την ημέρα αρχικά ( άσχετα με τον χαμό που θα δω παρακάτω πως μπορεί να προκαλέσει αυτό. */
	
	/* Οι μήνες με 31 ημέρες. */
	if ( ( day == 31 ) && ( (month == 1 ) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12) ) )
		{
		day = 1;
		month++;
		
		if ( month == 12 ) /* Αν μήνας γίνει ο τελευταίος.*/
			year++;
		}


	/* Οι μήνες με 30 ημέρες. */
	else if ( ( day == 30 ) && ( (month == 2 ) || (month == 4) || (month == 6) || (month == 9) || (month == 11) ) )
		{
		day 1;
		month++;
		
		if ( month == 12 ) /* Αν μήνας γίνει ο τελευταίος.*/
			year++;
		}


	
	/* Υπάρχει όμως και οι special περίπτωση του ΚΟΥΤΣΟΥ του Φλεβάρη. */	
	
	if ( ( isLeap() ) && ( month == 2 ) && ( day == 29 ) )
		{
		day = 1;
		month++;
		}


	else if ( ( !isLeap() ) && ( month == 2 ) && ( day == 28 ) )
		{
		day = 1;
		month++;
		}
	
	
	}



date::~date()
{

}

