#include "sand.h"

main()
{
	greet();
	login(user, pass, session);
        return 0;
}

void greet()
{
	printf("\033[2;36m  ________________________________\033[0;0m\n");
	printf("\033[2;36m /|             \033[0;0m|/*\033[2;36m              /|\033[0;0m\n");
	printf("\033[2;36m----------------\033[0;0m|\033[2;36m---------------/ |\033[0;0m\n");
	printf("\033[2;36m|              \033[0;0m/|              \033[2;36m|  |\033[0;0m\n");
	printf("\033[2;36m|             \033[0;0m! |              \033[2;36m| /|\033[0;0m\n");
	printf("\033[2;36m|\033[2;33m==============\033[0;0m\\|\033[2;33m==============\033[2;36m|/ |\033[0;0m\n");
	printf("\033[2;36m|               \033[0;0m|\\             \033[2;36m| /|\033[0;0m\n");
	printf("\033[2;36m|               \033[0;0m| !\033[2;36m            |/ |\033[0;0m\n");
	printf("\033[2;36m|\033[2;33m===============\033[0;0m|/\033[2;33m=============\033[2;36m|  |\033[0;0m\n");
	printf("\033[2;36m|              \033[0;0m/|\033[2;36m              | /\033[0;0m\n");
	printf("\033[2;36m|______________________________|/\033[0;0m\n");
	printf( "\n The \033[2;32mSAND\033[0;0m shell by Silas Wrinker :: updated \033[2;32m2024\033[0;0m\n\n");
}
