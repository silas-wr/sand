#include <stdio.h>
#include <stdlib.h>
#define MAXUSER 40
#define MAXPASS 100
#define MINUSER 5
#define MINPASS 5
#define SESSION 10
#define EOL '\n'

void gline(int, int, char[]);

main()
{
        char user[MAXUSER+1];
	char pass[MAXPASS+1];
	char session[SESSION+1];

	printf("Username: ");
	gline(MAXUSER, MINUSER, user);

	printf("Password: ");
	gline(MAXPASS, MINPASS, pass);

	printf("Session code: ");
	gline(SESSION, SESSION, session);

	return 0;
}

void gline(int max, int min, char s[])
{
	int  i = 0;
	char c = getchar();

	while (c != EOL)
	{
		s[i] = c;
		c = getchar();
		++i;
	}

	if (max != min && (i > max || i < min)) 
		printf("[!] Invalid input (>=%i <=%i chars)\n", min, max);
	else if (max == min && i != min)
		printf("[!] Invalid input (=%i chars)\n", min);          	
	else
		s[i] = '\0';

	// printf("[i] %i chars received.\n", i);

}
