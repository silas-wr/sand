#include "sand.h"

extern char user[MAXUSER+1];
extern char pass[MAXPASS+1];
extern char session[SESSION+1];

main()
{
	greet();
	login(user, pass, session);
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
		printf("[!] Invalid input (>=%i <=%i chars)\n", min, max); exit(1);
	else if (max == min && i != min)
		printf("[!] Invalid input (=%i chars)\n", min); exit(1);
	else
		s[i] = '\0';

	// printf("[i] %i chars received.\n", i);

}

void greet()
{
	printf("\033[2;36m  ________________________________\033[0;0m");
	printf("\033[2;36m /|             \033[0;0m|/*\033[2;36m              /|\033[0;0m");
	printf("\033[2;36m----------------\033[0;0m|\033[2;36m---------------/ |\033[0;0m");
	printf("\033[2;36m|              \033[0;0m/|              \033[2;36m|  |\033[0;0m");
	printf("\033[2;36m|             \033[0;0m! |              \033[2;36m| /|\033[0;0m");
	printf("\033[2;36m|\033[2;33m==============\033[0;0m\\|\033[2;33m==============\033[2;36m|/ |\033[0;0m");
	printf("\033[2;36m|               \033[0;0m|\\             \033[2;36m| /|\033[0;0m");
	printf("\033[2;36m|               \033[0;0m| !\033[2;36m            |/ |\033[0;0m");
	printf("\033[2;36m|\033[2;33m===============\033[0;0m|/\033[2;33m=============\033[2;36m|  |\033[0;0m");
	printf("\033[2;36m|              \033[0;0m/|\033[2;36m              | /\033[0;0m");
	printf("\033[2;36m|______________________________|/\033[0;0m");
	printf( "\n The \033[2;32mSAND\033[0;0m shell by Silas Wrinker :: updated \033[2;32m2024\033[0;0m\n");
}
