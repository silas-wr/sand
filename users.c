#include "sand.h"

void login(u, p, s)
{
	printf("Username: ");
	gline(MAXUSER, MINUSER, &u);

	printf("Password: ");
	gline(MAXPASS, MINPASS, &p);

	printf("Session code: ");
	gline(SESSION, SESSION, &s);  
}
