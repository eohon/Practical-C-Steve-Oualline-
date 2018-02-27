#include <stdio.h>

/* This simple program computes the resistance 
 * of any number of parallel resistors based on
 * the quation: 1/R = 1/R1 + 1/R2 ... 1/Rn
 * 
 * Author: Panagiotidis Anastasios
 * December 2017
 * 
 * This exercise was taken from page 98 of:	
 * Practical C Programming, by Steve Oualline
 * O'Reilly & Associates, Inc.	*/

int total; /* The number of parallel resistors. */
float res[100]; /* stores the values of the resistors. */
char line[100]; /* stores the input from the user. */
float total_resistance; /* the result of all the parallel resistore values. */

int i; /* using this in a loop. */


int main()
{
	/* How many values is the user going to input? */
	(void)printf("How many parallel resistors do you have?\n");
	(void)fgets(line, sizeof(line), stdin);
	(void)sscanf(line, "%d", &total);
	
	/* Getting the input from the user: */
	for(i = 0; i < total; i++)
	{
		(void)printf("Give me the value of resistor #%d \n",i+1);
		(void)fgets(line, sizeof(line), stdin);
		(void)sscanf(line, "%f", &res[i]);
	}
	
	for(i = 0; i < total; i++)
	{
		total_resistance += 1/res[i];
	}
	
	/* Based on the equation 1/R = 1/R1 + 1/R2 ..... 1/Rn
	 * I need to "flip" the value of total_resistance. */
	 
	 total_resistance = 1/total_resistance;
	 
	 /* Printing the results */
	 
	 (void)printf("The total resistance is: %.2f\n",total_resistance);
}
