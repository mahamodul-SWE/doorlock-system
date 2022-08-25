#include <stdio.h>
#include <string.h>

void main()
{
char pasword[10],usrname[10], ch;
int i;

clrscr();

printf("Enter User name: ");
gets(usrname);
printf("Enter the password : ");

for(i=0;i<8;i++)
{
ch = getch();
pasword[i] = ch;
ch = '*' ;
printf("%c",ch);
}

pasword[i] = '\0';

/*If you want to know what you have entered as password, you can print it*/
printf("\nYour password is :");

for(i=0;i<8;i++)
{
printf("%c",pasword[i]);
}
}
