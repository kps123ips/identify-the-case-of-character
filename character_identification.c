#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a Character");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	printf("It is an Upper Case Alphabet");
	else if(ch>=97 && ch<=122)
	printf("It is a Lower Case Alphabet");
	else if(ch>=48 && ch<=57)
	printf("It is a Digit");
	else
	printf("It is a Special Character");
	getch();
}
