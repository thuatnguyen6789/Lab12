#include <stdio.h>
void main ()
{
	char name[20];
	/* name is declared as a single dimensional character array */
	
	/* clears the screen */
	puts (" Enter your name: "); /* Display a message */
	
	gets (name); /* Accepts the input */
	
	puts (" Hi there: ");
	puts (name); /* Display the input */
	
	getch();
}
