#include <stdio.h>
void main ()
{
	char name[20];
	/* name is declared as a single dimensional character array */
	
	/* Clears the screen */
	printf(" Enter your name: "); /* Display a message */
	
	scanf("%s", &name); /* Accepts the input */
	
	printf(" Hi there: %s", name); /* Display the input */
	
	getch();
}
