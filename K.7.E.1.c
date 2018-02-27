#include <stdio.h>

/* This program prints out a 8x8 checkerboard using FOR loops.
 * There are two loops, where the first one represents 
 * the ROWS and the second one represents the COLUMNS.
 * 
 * The first loop is between [0,50] because it creates 
 * a large made out of 8 smaller boxes whice are made
 * by 5 chars themselves. Therefore, the size of the
 * ROW is 5*8=40. 
 * 
 * The second loop is between [0,56] because it creates
 * a large box made out of 8 smaller boxes. Those smaller
 * boxes are made by 7 chars. Therefore, the size for the 
 * COLUMNS is 7*8=56. 
 * 
 * A represantation of a 2x2 chekerboard:
 * 
 * +------+------+
 * |      |      |
 * |      |      |
 * |      |      |
 * +------+------+
 * |      |      |
 * |      |      |
 * |      |      |
 * +------+------+ 
 * 
 * Author: Panagiotidis Anastasios
 * December 2017
 * 
 * This exercise was taken from page 56 of:	
 * Practical C Programming, by Steve Oualline
 * O'Reilly & Associates, Inc.	*/

int i; /* the rows of the box. */
int k; /* the columns of the box. */

int main()
{
	
	for( i = 0; i <= 5*8 ; i++) /* 8 ROWS of boxes with 5 length each. */
	{
		for(k = 0; k <= 7*8 ; k++) /* 8 COLUMNS of boxes with 7 length each. */
		{
			if(i%5 == 0) /* Every 8 loops i am at the beginning of a row, therefore I print '+' */
			{
				if(k%7==0)(void)printf("+");
				else (void)printf("-");
			}
			else
			{
				if(k%7==0)(void)printf("|");
				else(void)printf(" ");
			}
		}
	
		(void)printf("\n");
	}
	
	return 0;
}
