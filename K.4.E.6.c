#include <stdio.h>


/* This simple program converts minutes into 
 * hours and minutes. For example:
 * 60 minutes = 1 hour and 0 minutes
 * 90 minutes = 1hour and 30 minutes
 * 
 * Author: Panagiotidis Anastasios
 * December 2017
 * 
 * This exercise was taken from page 56 of:	
 * Practical C Programming, by Steve Oualline
 * O'Reilly & Associates, Inc.	*/


char line[100]; /* store the input of the user */
int total_minutes; /* store the total minutes, meaning the input number from the user*/
int hours = 0; /* store the hours */
int minutes = 0; /* store the undevided minute sum */


int main()
{
			/* Small Menu */
	(void)printf("\n-> This simple program converts hours and minutes               \n");
	(void)printf("-> into just minutes. For example:                                \n");
	(void)printf("-> 60 minutes = 1 hour and 0 minutes                              \n");
	(void)printf("-> 90 minutes = 1hour and 30 minutes                              \n");
	(void)printf("->                                                                \n");
	(void)printf("-> Author: Panagiotidis Anastasios                                \n");
	(void)printf("-> December 2017                                                  \n");
	(void)printf("+-------------------------------------------------------------+ \n\n");
	
	
	/* Get the user's input */
	(void)printf("Give me the amount of minutes (e.g. 90 minutes)\n");
	(void)fgets(line, sizeof(line), stdin);
	(void)sscanf(line, "%d", &total_minutes);
	
	/* Total minutes must not be less than zero */
	if(total_minutes < 0)
	{
		(void)printf("ERROR: Minutes must be a non negative number\n");
		return 1;
	}
	
	while(total_minutes >= 60)
	{
		total_minutes -= 60; /* Subtrack 60 minutes and put them as one hour in the hours variable.*/
		hours++;
	}
	minutes = total_minutes; /* Put the remaining total_minutes into the minutes variable.*/
	total_minutes = total_minutes+60*hours; /* Bring back the original value in order to print it. */
	
	/* Print the results */
	(void)printf("%d minutes = %d hours and %d minutes\n",total_minutes,hours,minutes);
	
	return 0;	
}
