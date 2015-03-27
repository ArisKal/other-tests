
#include "Person.h"
#include <iostream>
using namespace std;

Person::Person()
{
string ono,epi,tel,em;
int ag;

	cout << "Δώσε το όνομα : ";	cin >> ono ; 	setName(ono);
	cout << "Δώσε το επίθετο : ";	cin >> epi ;	setLastname(epi);
	cout << "Δώσε το τηλέφωνο : ";	cin >> tel ;	setTelephone(tel);
	cout << "Δώσε την υληκία : ";	cin >> ag ;	setAge(ag);
	cout << "Δώσε το e-mail : ";	cin >> em ;	setEmail(em);
}



string	Person::getName()
{
	return name;
}



string	Person::getLastname()
{
	return lastname;
}



string	Person::getTelephone()
{
	return telephone;
}



int	Person::getAge()
{
	return age;
}



void	Person::setName(string n)
{
	name = n;
}



void	Person::setLastname(string l)
{
	lastname = l;
}



bool	Person::setTelephone(string t)
{
	int i;
	//first rule
	if(t.length()!=10) return false;
	//second rule
	if(t[0]=='0') return false;
	for(i=0;i<t.length();i++)
	{
		//third rule
		if(!(t[i]>='0' && t[i]<='9')) return false;
	}
	telephone = t;
	return true;
}



bool	Person::setAge(int a)
{
	if (a<0) 
		return false;
		
	age = a;
	
	return true;
}



bool	Person::isAdult()
{
	if(age>=18) return true;
	else return false;
}



void	Person::printDetails()
{
	cout << endl << endl;
	cout<<"Person details"<<endl;
	cout<<"Name:     \t"<<name<<endl;
	cout<<"Lastname: \t"<<lastname<<endl;
	cout<<"Telephone:\t"<<telephone<<endl;
	cout<<"Age:      \t"<<age<<endl;
	cout<<"E-mail:      \t"<<email<<endl;
}



bool	Person::setEmail(string aEmail)
{
	int iparxi = 0;
	
	if ( aEmail[0] == '@' ) /* Αν είναι στην πρώτη θέση δε το δέχομαι. */
		return false;

	else if ( aEmail[aEmail.size()-1] == '@' ) /* Αν είναι στην τελευταία θέση δε το δέχομαι. */
		return false;
	
	for (int i = 0; i< aEmail.size(); i++ ) /* Εδώ θα μπορούσε να αρχίζει και από τον 1 ( 2η θέση του πίνακα ) εφόσον την 0 ( πρώτη θέση ) την έχω παραπάνω ελέγξει. */
		{
		if ( aEmail[i] == '@' )
			iparxi += 1; /* Προσθέτουμε ότι βρήκαμε 1 @ .*/
		}
	
	if (iparxi == 1 )
		{
		email = aEmail;
		return true;
		}
	else
		return false;

}
	

void	Person::ine_megaliteros_o(Person &other1, Person &other2)
{
	if ( ( age > other1.getAge() ) && ( age > other2.getAge() ) )
		{
		cout << "Μεγαλύτερος σε υληκία είναι ο : " << endl;
		printDetails() ;
		}
		
	else if ( ( age < other1.getAge() ) && ( other1.getAge() > other2.getAge() ) )
		{
		cout << "Μεγαλύτερος σε υληκία είναι ο :" << endl;
		other1.printDetails() ;
		}
		
	else if ( ( age < other2.getAge() ) && ( other1.getAge() < other2.getAge() ) )
		{
		cout << "Μεγαλύτερος σε υληκία είναι ο :" << endl;
		other2.printDetails() ;
		}

}



string Person::getEmail()
{
	return email;
}



Person::~Person()
{

}
