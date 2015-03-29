#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle {
private:
	double x0,y0,radious;
public:
	Circle(double x,double y,double r);
	void scale(double factor);
	bool pointIn(double x,double y); //to be implemented
	double getArea();
	double getPerimeter();
	~Circle();
};

#endif /* CIRCLE_H_ */
