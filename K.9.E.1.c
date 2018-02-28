/**********************************************************
 * This simple program uses macros to introduce           *
 * the boolean variable type. A bool is simply            *
 * an integer that either has the value 0 (FALSE)         *
 * or !0 (TRUE). So, using the preprocessor macros        *
 * I was able to create a sudo-boolean type.              * 
 *                                                        *
 * Also, I defined two other macros, one TRUE and         *
 * one FALSE, and gave them the values 1 and 0            *
 * respectively.                                          *
 *                                                        *
 * This program was written by Panagiotidis Anastasios    *
 * 28 February 2018 (ariscrazyp@gmail.com)                *
 * Anyone can use this piece of software anyway they      *
 * want.                                                  *
 *                                                        *
 * This exercise was taken from page 130 of:              *
 * Practical C Programming, by Steve Oualline             *
 * O'Reilly & Associates, Inc.	                          *
 **********************************************************/
#include <stdio.h>

#define bool int
#define TRUE 1;
#define FALSE 0;

int main()
{
	bool x; 
	x = TRUE;
	(void)printf("x = %d TRUE\n",x);
	x = FALSE;
	(void)printf("x = %d FALSE\n",x);
	return 0;
	
}
