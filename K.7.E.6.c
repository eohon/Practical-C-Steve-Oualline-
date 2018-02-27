#include <stdio.h>

/* This simple program reads a character and 
 * then prints out whether it is a vowel
 * or a consonant.
 * 
 * Author: Panagiotidis Anastasios
 * December 2017
 * 
 * This exercise was taken from page 99 of:	
 * Practical C Programming, by Steve Oualline
 * O'Reilly & Associates, Inc.	*/

char line[100]; /* stores the user's input */
char letter; /*stores the user's letter of choice */

int main()
{
	/* Getting input from the user */
	(void)printf("Type in a letter.\n");
	(void)fgets(line, sizeof(line), stdin);
	(void)sscanf(line, "%c", &letter);
	
	/* There are 5 vowels in the english alphabet.
	 * Using an if statement i am going to check whether 
	 * the letter is a vowel. If it's not, then it
	 * is a consonant.*/
	 
	if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
	{
		(void)printf("The letter %c is a vowel.\n",letter);
	}
	else
	{
		(void)printf("The letter %c is a consonant.\n",letter);
	}
	
	return 0;
}
