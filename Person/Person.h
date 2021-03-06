

#ifndef PERSON_H_
#define PERSON_H_
# include <string>
using namespace std;

class Person {
private:
	string name,lastname,telephone;
	int age;
	/* Προσθέτουμε εδώ το e-mail. */
	string email;
	
public:
	Person();
	void setName(string n);
	void setLastname(string l);
	bool setTelephone(string t);
	bool setAge(int a);
	string	getName();
	string	getLastname();
	string	getTelephone();
	int	getAge();
	bool isAdult();
	void printDetails();
	
	/* Οι μέθοδοι των ερωτημάτων. */
	bool setEmail(string aEmail);
	string getEmail();
	void ine_megaliteros_o(Person &other1, Person &other2);
	
	
	virtual ~Person();
};

#endif /* PERSON_H_ */
