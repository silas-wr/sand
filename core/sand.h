#include <stdio.h>
#include <stdlib.h>
#define MAXUSER 40
#define MAXPASS 100
#define MINUSER 5
#define MINPASS 5
#define SESSION 10
#define EOL '\n'

char user[MAXUSER+1];
char pass[MAXPASS+1];
char session[SESSION+1];

void greet(void);
void login(char[], char[], char[]);
void gline(int, int, char[]);
void boxread(void);
void boxcreate(void);
void iread(void);
void iwrite(void);
void serve(char[]);
void client(char[]);
