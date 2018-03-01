/* This program uses a macro which return 1 if the X is divisible
 * by 10, or 0 if it is not. 
 * I also use ternary operators to make the creation of the macro
 * a lot easier. I could have used a proper function as a macro,
 * but I chose not to.
 * 
 * This program was written by Panagiotidis Anastasios   
 * 1 March 2018 (ariscrazyp@gmail.com)                
 * Anyone can use this piece of software anyway they     
 * want.                                                  
 *                                                        
 * This exercise was taken from page 130 of:              
 * Practical C Programming, by Steve Oualline             
 * O'Reilly & Associates, Inc.	                          
 * 
 * */

#include <stdio.h>

#define MACRO(x) (((x%10)==0) ? 1 : 0)

int main()
{
	int x=201;
	
	(void)printf("%d\n",MACRO(x));
	
	return 0;
}
