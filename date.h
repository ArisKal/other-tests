/*
* date.h
*
*  Created on: 7 Ìבס 2015
*      Author: sheridan
*/

#ifndef DATE_H_
#define DATE_H_

class date {
private:
	int day, month, year;
public:
	date();
	void initDate(int d, int m, int y);
	bool setDay(int d);
	bool setMonth(int m);
	bool setYear(int y);
	int getDay();
	int getMonth();
	int getYear();
	void printDate();
	bool isLeap();
	void nextDate();
	virtual ~date();
};

#endif /* DATE_H_ */
