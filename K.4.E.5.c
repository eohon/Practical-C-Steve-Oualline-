#include <stdio.h>

/* This simple program converts hours and minutes 
 * into just minutes. For example:
 * 1 hour 0 minutes = 60 minutes
 * 1 hour 30 minutes = 90 minutes
 * 
 * Author: Panagiotidis Anastasios
 * December 2017
 * 
 * This exercise was taken from page 56 of:	
 * Practical C Programming, by Steve Oualline
 * O'Reilly & Associates, Inc.	*/

char line[100]; /* For the user's input */
int hours; /* Storing the hours */
int minutes; /* Storing the minutes (not the total minutes) */
int total_minutes; /* The total amount of minutes, including the hours converted into minutes */

int main()
{
			/* Small Menu */
	(void)printf("\n-> This simple program converts hours and minutes               \n");
	(void)printf("-> into just minutes. For example:                                \n");
	(void)printf("-> 1 hour 0 minutes = 60 minutes                                  \n");
	(void)printf("-> 1 hour 30 minutes = 90 minutes                                 \n");
	(void)printf("->                                                                \n");
	(void)printf("-> Author: Panagiotidis Anastasios                                \n");
	(void)printf("-> December 2017                                                  \n");
	(void)printf("+-------------------------------------------------------------+ \n\n");
	
	
	/* Getting the input from the user */
	(void)printf("Give me the hours and the minutes (e.g. 1 hours and 0 minutes).\n");
	(void)fgets(line, sizeof(line), stdin);
	(void)sscanf(line, "%d %*s %*s %d", &hours, &minutes);
	
	/* The hours and the minutes must be positive numbers. */
	if(hours < 0 || minutes < 0)
	{
		(void)printf("ERROR: The hours and the minutes must be positive numbers.\n");
		return 1;
	}
	
	/* Convert hours into minutes and sum them with the rest of the minutes. */
	total_minutes = hours * 60;
	total_minutes += minutes;
	
	/* Printing the results. */
	(void)printf("%d hours and %d minutes = %d minutes\n",hours,minutes,total_minutes);
}
