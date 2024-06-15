#include <stdio.h>
#define MAXUSER 40
#define MAXPASS 100
#define MINUSER 5
#define MINPASS 5
#define SESSION 10

void main()
{
        char user[MAXUSER];
        char pass[MAXPASS];
        char session[SESSION];

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
        char c;

        while ((c = getchar()) != EOL && i < max-1)
        {
                s[i] = c;
                ++i;
        }

        if (max != min && (i > max || i < min))
                printf("[!] Invalid input (>%i <%i chars)\n", min, max);
        else if (max == min && i != min)
                printf("[!] Invalid input (=%i chars)\n", min);
        else
                s[i] = '\0';

}
