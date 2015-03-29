# include "Circle.h"
# include <math.h>


Circle::Circle(double x,double y,double r)
{
	x0=x;
	y0=y;
	radious = fabs(r);
}

void	Circle::scale(double factor)
{
	radious = fabs(factor) * radious;
}

bool	Circle::pointIn(double x,double y)
{
	//to be implemented
}

double	Circle::getArea()
{
	return M_PI * radious * radious;
}

double	Circle::getPerimeter()
{

	return 4.0 * M_PI * radious;
}

Circle::~Circle()
{

}
