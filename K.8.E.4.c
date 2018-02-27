/**********************************************************
 *                       PROCEDURE                        *
 * hash -- returns the added ANSI codes                   *
 *         of each charachter in a char string            *
 *                                                        *
 * <Parameters>                                           *
 * --the character array (String)                         *
 *                                                        *
 * <returns>                                              *
 * the added ANSI values, or hash                         *
 *                                                        *       
 * <Example>                                              *
 * The string "A" would have a hash code of 65.           *
 *                                                        * 
 * <Source Info>                                          *
 * This program was written by Panagiotidis Anastasios    *
 * 27 February 2018 (ariscrazyp@gmail.com)                *
 * Anyone can use this piece of software anyway they      *
 * want.                                                  *
 *                                                        *
 * This exercise was taken from page 114 of:              *
 * Practical C Programming, by Steve Oualline             *
 * O'Reilly & Associates, Inc.	                          *
 *                                                        *
 **********************************************************/

int hash(char string[])
{
	int i; /* used in the for loop */
	int sum = 0; /* used in the loop. It stores the sum of the ANSI values*/
	
	/*
	 * The following loop repeats until the 
	 * end of the string (\0). 
	 * It adds the ANSI vallues to a sum variable
	 * and then exits.
	 * */
	for(i = 0; string[i] != '\0'; i++)
	{
		sum += string[i];
	}
	
	return sum;
}









