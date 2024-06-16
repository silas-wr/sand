#include "sand.h"

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
	{
		printf("[!] Invalid input (>=%i <=%i chars)\n", min, max);
		exit(1);
	} else 
	{
		if (max == min && i != min)
		{
			printf("[!] Invalid input (=%i chars)\n", min);
			exit(1);
		} else
		{
			s[i] = '\0';
		}
	}

	// printf("[i] %i chars received.\n", i);

}

void login(u, p, s)
{
	printf("Username: ");
	gline(MAXUSER, MINUSER, u);

	printf("Password: ");
	gline(MAXPASS, MINPASS, p);

	printf("Session code: ");
	gline(SESSION, SESSION, s);  
}
