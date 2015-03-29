#ifndef DATE_H_
#define DATE_H_

class Date {


private:

		int monthdays[12];
		void fillTable();
		int day,month,year;


public:

	//constructors
	Date();
	Date(int y);
	Date(int d,int m,int y);

	//set methods
	bool setYear(int y);
	bool setMonth(int m);
	bool setDay(int d);

	//get methods
	int	 getDay();
	int	 getMonth();
	int	 getYear();

	//utility methods
	bool	sameDate(Date &other);
	void	nextDay();
	void	printDate();
	virtual ~Date();



};

#endif /* DATE_H_ */
