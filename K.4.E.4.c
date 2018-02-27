#include <stdio.h>

/* A very simple program that converts 
 * miles per hour to kilometers per hour.
 * 
 * Author: Panagiotidis Anastasios
 * December 2017
 * 
 * This exercise was taken from page 56 of:	
 * Practical C Programming, by Steve Oualline
 * O'Reilly & Associates, Inc.	*/
 
#define con 0.6213712 /* using this consant to convert the miles.*/
 
float kilo; /* stroring the kilometers (result) */
float miles; /* storing the miles */
char line[100]; /* storing the input from the user */

int main()
{
	
		/* Small Menu */
	(void)printf("\n-> A very simple program that converts                          \n");
	(void)printf("-> miles into kilometers.                                         \n");
	(void)printf("->                                                                \n");
	(void)printf("-> Author: Panagiotidis Anastasios                                \n");
	(void)printf("-> December 2017                                                  \n");
	(void)printf("+-------------------------------------------------------------+ \n\n");
	
	
	/* Getting input from the user: */
	(void)printf("Give me the dinstance in miles.\n");
	(void)fgets(line, sizeof(line), stdin);
	(void)sscanf(line, "%f", &miles);
	
	if(miles < 0)
	{
		(void)printf("ERROR: The distance can't be a negative number.\n");
		return 1;
	}
	
	kilo = miles / con;
	
	(void)printf("%.2f miles = %.2f kilometers.\n",miles, kilo);
	
	
	return 0;
}
