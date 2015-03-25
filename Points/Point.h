/*
 * Point.h
 *
 *  Created on: 10 Μαρ 2015
 *      Author: sheridan
 */

#ifndef POINT_H_
#define POINT_H_

class Point {
private:
	double x,y;
public:
	Point();
	Point(double mx,double my);
	double getx();
	double gety();
	void move(double dx,double dy);
	void print();

	bool equals(Point other); /* Ελέγχει αν έχουν τις ίδιες συντεταγμένες. */

	virtual ~Point();
};

#endif /* POINT_H_ */
