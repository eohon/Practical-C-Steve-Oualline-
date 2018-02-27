#include <stdio.h>

/* A very simple program that prints out
 * the perimeter of a rectangle given
 * it's height and width.
 * 
 * Author: Panagiotidis Anastasios
 * December 2017 
 * 
 * This exercise was taken from page 56 of:	
 * Practical C Programming, by Steve Oualline
 * O'Reilly & Associates, Inc.	*/

char line[100]; /* An array for storing the input of the user.*/
float height; /* The height of the rectangle.*/
float width;  /* The width of the rectangle.*/
float perimeter; /* The perimeter of the rectangle.*/

int main()
{
	/* Small Menu */
	(void)printf("\n-> A very simple program that prints out                        \n");
	(void)printf("-> the perimeter of a rectangle given                             \n");
	(void)printf("-> t's height and width.                                          \n");
	(void)printf("->                                                                \n");
	(void)printf("-> Author: Panagiotidis Anastasios                                \n");
	(void)printf("-> December 2017                                                  \n");
	(void)printf("+-------------------------------------------------------------+ \n\n");
	
	/* Getting the input from the user.*/
	(void)printf("What is the HEIGHT of the rectangle?\n");
	(void)fgets(line, sizeof(line), stdin);
	(void)sscanf(line, "%f", &height);
	
	(void)printf("What is the WIDTH of the rectangle?\n");
	(void)fgets(line, sizeof(line), stdin);
	(void)sscanf(line, "%f", &width);
	
	perimeter = height * width; /* Calculating the perimeter of the rectangle.*/
	
	/* Printing the results. */
	(void)printf("The perimeter of the triangle is: %.2f\n", perimeter);
	
}
