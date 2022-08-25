#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()

{
    int i, j;
    const char pinM[5] = "1234";
    int brk = 0, count = 1;

    char rechk;

    char check, ch, pinT[5];

    printf("\t\tWelcome to pin base lock system!!! \n\n\n");



do{
    printf("\t\tEnter pin code(digit only): ");


    for(i=0; i<4; i++){
            ch = getch();
            pinT[i] = ch;
            ch = '*' ;
            printf("%c",ch);
        }

        pinT[i] = '\0';

        int com = strcmp(pinM, pinT);

        if( com == 0){


            printf("\n\n\t\tAccess Granted!! \n");

            brk=0;
            break;


        }

        else
        {
            printf("\n\n\t\t \aWrong pin!!! Access Denied!!!");

            printf("\n\n\t\tPlease Try again 'y'or 'n': ");
            scanf("%c", &rechk);
            count = count + 1;
            brk = 1;
        }

}while(rechk=='y' && count<=2 && brk == 1);



    printf(" ");
    printf(" ");

    if(count==3){
        printf("\n\n\t\tYou Have tried max times!!!\n\n");
    }


   return 0;
}


