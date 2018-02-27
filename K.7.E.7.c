#include <stdio.h>
#include <string.h>

/* This simple program reads a number and 
 * then prints out the numbers in written form.
 * For example, if the user types in '56' the 
 * program will produce 'five six'. If the user
 * types in '-34' the program will produce
 * 'minus three four'.
 * 
 * Author: Panagiotidis Anastasios
 * December 2017
 * 
 * This exercise was taken from page 99 of:	
 * Practical C Programming, by Steve Oualline
 * O'Reilly & Associates, Inc.	*/



char line[100]; /* stores the input from the user */
char numbers[100]; /* stores the numbers that the user typed in */
size_t i; /* used in a for loop */


int main()
{
	/* Getting user's input*/
	(void)printf("Give me the number and i will turn it into characters: \n");
	(void)fgets(line, sizeof(line), stdin);
	(void)sscanf(line, "%s", numbers);
	
	/* The following loop runs over the values of the numbers array.
	 * Each time it initiates a switch statement and evaluates 
	 * the current character. Based on what that char is, it prints
	 * a word. If the character doesn't represent a number it will
	 * print an error and end the program.*/
	
	for(i = 0; i < strlen(numbers); i++)
	{
		
		/* In case the first char is a minus: */
		if(numbers[i] == '-')
		{
			(void)printf("minus ");
			continue;
			
		}
		
		switch(numbers[i])
		{
			case '0':
			{
				(void)printf("zero ");
				break;
			}
			case '1':
			{
				(void)printf("one ");
				break;
			}
			case '2':
			{
				(void)printf("two ");
				break;
			}
			case '3':
			{
				(void)printf("three ");
				break;
			}
			case '4':
			{
				(void)printf("four ");
				break;
			}
			case '5':
			{
				(void)printf("five ");
				break;
			}
			case '6':
			{
				(void)printf("six ");
				break;
			}
			case '7':
			{
				(void)printf("seven ");
				break;
			}
			case '8':
			{
				(void)printf("eight ");
				break;
			}
			case '9':
			{
				(void)printf("nine ");
				break;
			}
			default:
			{
				(void)printf("ERROR: An unexpected error occured. \n");
				return 1;
			}
		}
	}

	(void)printf("\n");
	return 0;	
	
}


