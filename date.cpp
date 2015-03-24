/*
* date.cpp
*
*  Created on: 7 Ìבס 2015
*      Author: sheridan
*/
#include <iostream>
using namespace std;
#include "date.h"
date::date()
{
	day = 1;
	month = 1;
	year = 1;
}

void date::initDate(int d, int m, int y)
{
	if (!setDay(d)) day = 1;
	if (!setMonth(m)) month = 1;
	if (!setYear(y)) year = 1;
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

	if (year%100 == 0){
		if (year % 400 == 0)
			return true;
		else
			return false;
	}
	else
	{
		if (year % 4 == 0)
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

