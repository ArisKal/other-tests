# include "Person.h"
# include <stdlib.h>
int main()
{
	Person giannis;
	giannis.setName("Giannis");
	giannis.setLastname("Tsoulos");
	giannis.setTelephone("aaa2111");
	giannis.setAge(38);
	giannis.printDetails();
	system("PAUSE");
	return 0;
}

