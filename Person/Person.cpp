
#include "Person.h"
#include <iostream>
using namespace std;

Person::Person()
{
	name="";
	lastname="";
	telephone="2681050500";
	age=18;
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
	if(age<0) return false;
	age=a;
	return true;
}

bool	Person::isAdult()
{
	if(age>=18) return true;
	else return false;
}

void	Person::printDetails()
{
	cout<<"Person details"<<endl;
	cout<<"Name:     \t"<<name<<endl;
	cout<<"Lastname: \t"<<lastname<<endl;
	cout<<"Telephone:\t"<<telephone<<endl;
	cout<<"Age:      \t"<<age<<endl;
}

Person::~Person()
{

}
