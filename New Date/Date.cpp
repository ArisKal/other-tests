#include "Date.h"
# include <iostream>
using namespace std;

Date::Date() // Αν την καλέσει χωρίς ΚΑΜΊΑ παράμετρο, τότε θα του ζυτηθούν από το πληκτρολόγιο. Όπως λέει το πρώτο ερώτημα.
{
	int y,m,d;
	fillTable();

	cout << "Δώσε την ημερομινία." << endl ;
	cout << "Εισήγαγε το έτος : ";
	cin >> y;
	while ( setYear(y) == false )
		{
		cout << "Μη έγκυρη εισαγωγή έτους. Ξανά προσπάθησε."<< endl << "Δώσε το έτος :";
		cin >> y;
		}


	cout << "Εισήγαγε τον μήνα : ";
	cin >> m;
	while ( setMonth(m) == false )
		{
		cout << "Μη έγκυρη εισαγωγή του μήνα. Ξανά προσπάθησε."<< endl << "Δώσε τον μήνα :";
		cin >> m;
		}


	cout << "Εισήγαγε την ημέρα : ";
	cin >> d;
	while ( setDay(d) == false )
		{
		cout << "Μη έγκυρη εισαγωγή της ημέρας. Ξανά προσπάθησε."<< endl << "Δώσε την ημέρα :";
		cin >> d;
		}
}



Date::Date(int y) // Αν την καλέσει με μόνο ΜΊΑ παράμετρο, πάει να πει πως δίνει την χρονιά
{
	fillTable();
	day=1;
	month=1;
	setYear(y);
}



Date::Date(int d, int m, int y) // Αν δώσει τρεις παραμέτρους, πάει να πει πως δίνει , ημέρα, μήνα & έτος.
{

	fillTable();
	setYear(y);
	setMonth(m);
	setDay(d);

}



void	Date::fillTable()
{
	// Οι ημέρες του μήνα, για κάθε μήνα. Από 0..11 οι 12 μήνες στον πίνακα. :)
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
	if(y<0) // Δεν υπάρχει αρνητικος χρόνος ρε..
	{// ε.. και έτσι από προεπιλογή = 1 αφού είναι λάθος.
		year=1;
		return false;
	}
	else // Διαφορετικά, όλα εντάξει ;) :D
	{
		year=y;
		return true;
	}
}



bool Date::setMonth(int m)
{
	if (m<0 || m>12) // Ο μήνας πρέπει να είναι μεταξύ 0..12
	{ // Οτιδήποτε έξω από τα όρια που πρέπει να είναι ένας μήνας..
		month=1; // από προεπιλογή  = 1
		return false; // και είναι και λάθος
	}

	else // Αλλιώς όλα οκ.
	{
		month=m;
		return true;
	}
}



bool Date::setDay(int d)
{
	if ( d<0 || d>31 || d>monthdays[month-1] )
		{
		day=1;return false;
		}

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
	++day; // κατρχήν αυξάνω την ημέρα.


	if ( day>monthdays[month-1] ) // Αν η ημέρα είναι μεγαλύτερη από την μεγαλύτερη ημέρα που μπορεί να πάρει ο μήνας.
	{

		if ( (month == 2) && ( isLeap() ) ) // αν ΕΙΝΑΙ δίσεκτο το έτος όμως και ο μήνας ο δεύτερος!
		{
			if ( day > 29) // αν γίνει μεγαλύτερη του 29 και στο δίσεκτο..
			{ // δε το δεχόμαστε.. πάει ο επόμενος μήνας..
				day=1;
				month++;
			}
			// αν δεν έχει πάει 29 ακόμη.. ας πάει.. ΝΟ ΠΡΟΒΛΕΜ
		}

		if ( isLeap() == false ) // αν όμως ΔΕΝ είναι δίσεκτο.. ισχύουν τα κλασικά..
		{
			month++;
			day=1;
		}


		if(month>12)
		{
			month=1;
			year++;
		}

	}


}



void 	Date::privDay()
{
	--day; // Καταρχήν ΑΡΧΙΚΑ μειώνω κατά ΜΙΑ ημέρα


	if ( (day == 0) ) // Αν ΔΕΝ είναι δίσεκτο το έτος και η ημέρα πάει στο 0...
		{ // που δεν υπάρχει ημέρα 0..

			month--; // έτσι μειώνω τον μήνα..


			if ( month == 2 && isLeap() == true) // Αν είναι ο δεύτερος μήνας ΚΑΙ *είναι* ΔΙΣΕΚΤΟ το έτος..
			{
				day = 29;
			}

			else // αλλιώς κλασικά η μεγαλύτερη ημέρα του προηγούμενου μήνα..
				day = monthdays[month-1]; // και θα πάει στην τελευταία μέρα του προηγούμενου μήνα..

			if ( month == 0) // αν όμως ο μήνας γίνει 0 π.χ....
			{
				month=12; // τότε πάω στον τελευταίο μήνα..
				year--;
			}

		}

}



int 	Date::before(Date &other) // Επιστρέφει αν η τρέχων είναι μικρότερη από κάποια άλλη.
{
	if  ( year < other.getYear() )
		return 1;

	else if ( ( year == other.getYear() ) && ( month < other.getMonth() ) )
		return 1;

	else if  ( ( ( year == other.getYear() ) && ( month == other.getMonth() ) ) && day < other.getDay() )
		return 1;

	else
		return 0;

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




bool	Date::isLeap()
{ // Συνάρτηση η οποία βρίσκει, εάν το έτος είναι δίσεκτο.

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



Date::~Date()
{

}
