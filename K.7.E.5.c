#include <stdio.h>

/* This is a simple program that prints 
 * the multiplication table based on the
 * user's preferences.
 * 
 * Author: Panagiotidis Anastasios
 * December 2017
 * 
 * This exercise was taken from page 56 of:	
 * Practical C Programming, by Steve Oualline
 * O'Reilly & Associates, Inc.	*/

char line[100]; /* storing the user's input */
int number; /* stores the number of the multiplication table */
int i; /* use in a loop */

int main()
{
	/* getting input from user */
	(void)printf(" Give me a number between 1 and 9.\n This will represent the multiplication table.\n");
	(void)fgets(line, sizeof(line), stdin);
	(void)sscanf(line, "%d", &number);
	
	
	if(number<1 || number > 9)
	{
		(void)printf("ERROR: The number must be between 1 and 9.\n");
		return 1;
	}
	else
	{
		(void)printf(" +--------------+\n");
		for(i = 1; i <= 10 ; i++)
		{
			printf(" | %2d x %2d = %2d |\n",i,number,i*number);
		}
		(void)printf(" +--------------+\n");
	}
	
	return 0;
}
