#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{

	char str1[100], str2[100];
	printf("Enter first string : ");
	gets(str1);
	printf("Enter second string : ");
	gets(str2);
	if(strcmp(str1, str2)==0)
	{
		printf("Both the strings are equal");
	}
	else
	{
		printf("Both the strings are not equal");
	}
	getch();
}
