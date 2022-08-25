#include <stdio.h>  /*Declaration Header File*/
#include <conio.h>
#include <string.h>

int main()

{

    int i, j;
    const char pinM[5] = "1234"; //initialized default pin code
    int brk = 0, count = 1;

    char rechk;

    char check, ch, pinT[5];

    printf("\t\tWelcome to pin base lock system!!! \n\n\n"); //Welcome screen

do{
    printf("\t\tEnter pin code(digit only): ");

    for(i=0; i<4; i++){              //take pin code from user
            ch = getch();
            pinT[i] = ch;
            ch = '*' ;
            printf("%c",ch);
        }

        pinT[i] = '\0';

        int com = strcmp(pinM, pinT); //compare user given pin code with default pin code

        if( com == 0){

            printf("\n\n\t\tAccess Granted!! \n"); //  access granted if pin matched

            brk=0;
            break;

        }

        else
        {
            printf("\n\n\t\t \aWrong pin!!! Access Denied!!!"); //  access denied if pin doesn't matched

            printf("\n\n\t\tPlease Try again 'y'or 'n': ");
            scanf("%c", &rechk);
            count = count + 1;
            brk = 1;
        }

}while(rechk=='y' && count<=2 && brk == 1); //check for retry


    printf(" ");
    printf(" ");

    if(count==3){
        printf("\n\n\t\tYou Have tried max times!!!\n\n");
    }

    return 0;
}


