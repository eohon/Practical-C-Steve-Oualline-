/**********************************************************
 *                       PROCEDURE                        *
 * max -- returns the max value of an array of numbers    *
 *                                                        *
 * <Parameters>                                           *
 * --the integer array                                    *
 * --length of the array                                  *
 *                                                        *
 * <returns>                                              *
 * the maximum number                                     *
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

int max(int array[], int length)
{
	/* used to store the maximum number */
	int max = array[0];
	/* used in the for loop */
	int i;
	
	for(i = 0; i<length; i++)
	{
		if( array[i] > max)
		max = array[i];
	}
	return max;
}
