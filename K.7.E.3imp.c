#include <stdio.h>

/* This simple program computes the average
 * of n numbers. 
 * 
 * 
 * This is a rather special little program for me
 * because through this I learned how to use the 
 * return keys of sscanf. That allows me to use
 * sscanf in many cases where the input has no
 * standard format.
 * 
 * Author: Panagiotidis Anastasios
 * December 2017
 * 
 * This exercise was taken from page 56 of:	
 * Practical C Programming, by Steve Oualline
 * O'Reilly & Associates, Inc.	*/

char line[100]; /* stores the input of the user */
char operator; /* stores the 'q' if there is any */
float number; /* stores the number from the input */
float sum = 0; /* stores the sum of the numbers */
float average; /* stores the average of the numbers */
int count = 0; /* counts how many the numbers are */


int numArgsScan; /* The value that sscanf returns */


int main()
{
	while(1) /* There is a break statement to exit the loop */
	{
		/* Getting the user's input */
		(void)printf("Give me a number or type 'q' to show results and then quit: \n");
		(void)fgets(line, sizeof(line), stdin);
		numArgsScan = sscanf(line, "%f",&number); /* sscaf returnS 0 if it reads nothing 
												   * or the number of things it read (see documentation) */
		
		/* Manipulating the input data */
		
		if(numArgsScan != 0) /* It read a number */
		{
			sum += number;
			count++;
		}
		else /* It failed to read a number */
		{
			(void)sscanf(line, "%c",&operator);
			if(operator == 'q' || operator == 'Q')
			{
				break;
			}
		}
		
	}
	
	
	/* Makes sure that I don't devide with a zero... */
	if(count != 0)
	{
		average = sum / count;
		(void)printf("The average of the numbers is: %.2f\nbyebye\n", average);	
	}
	else
	{
		printf("There is no average.\nbyebye\n");
	}
	
	return 0;

}
