# include "Person.h"
# include <stdlib.h>
# include <iostream>


using namespace std;

int main()
{
	Person giannis;
	Person tasos;
	Person aris;
	
	/*giannis.setName("Giannis");
	giannis.setLastname("Tsoulos");
	giannis.setTelephone("aaa2111");
	giannis.setAge(38);*/
	
	
	
	giannis.printDetails();

	cout << endl << endl;

	/* Προσθήκη άκυρου e-mail */
	cout << "Προσθέτω το t@sos@tasos.gr" << endl;
	
	
	if ( giannis.setEmail("t@sos@tasos.gr") )
		cout << "Το e-mail "<< giannis.getEmail() << " προστέθηκε επιτυχώς." << endl;
	else 
		cout << "Το e-mail "<< giannis.getEmail() << " δεν είναι έγκυρο." << endl;
	
	
	cout << endl << endl;
	
	/* Προσθήκη έγκυρου e-mail. */
	cout << "Προσθέτω το tasos@tasos.gr" << endl;
	
	
	if ( giannis.setEmail("tasos@tasos.gr") )
		cout << "Το e-mail "<< giannis.getEmail() << " προστέθηκε επιτυχώς." << endl;
	else 
		cout << "Το e-mail "<< giannis.getEmail() << " δεν είναι έγκυρο." << endl;


	cout << endl << endl;
	
	
	giannis.ine_megaliteros_o(tasos,aris);
	
		
	
	return 0;
}

