/********************************************************** 
 *                       PROCEDURE                        *
 * count -- counts how many times the 'number' is in an   *
 * array.                                                 *
 *                                                        *
 * <Parameters>                                           *
 * number -- the number I will check to see how many times*
 *           it exists                                    *
 * array -- the array that contains the numbers           *
 * length -- the length of the array                      *
 *                                                        *
 * <Returns>                                              *
 * The function returns 'result+1' if the 'number' exists *
 * in the array or 'result' if it doesn't.                *
 *                                                        *
 * <Notes>                                                *
 * This program works recursively. It calls itself until  *
 * the end of the array.                                  *
 *                                                        * 
 * <Source Info>                                          *
 * This program was written by Panagiotidis Anastasios    *
 * 27 February 2018 (ariscrazyp@gmail.com)                *
 * Anyone can use this piece of software anyway they      *
 * want.                                                  *
 * This exercise was taken from page 114 of:              *
 * Practical C Programming, by Steve Oualline             *
 * O'Reilly & Associates, Inc.	                          *
 *                                                        *
 *                                                        *
 *********************************************************/

int count(int number, int array[], int length)
{
	/* used to store how many times the 'number' was found in the array*/
	int result = 0;
	
	/* keep calling the recursive function until you reach
	 * the end of the array, that is until length = 0*/
	if(length > 0)
	result += count(number,array,length-1);
	
	/* if you find the number, ad one to the counter (result) and return*/
	if( array[length] == number )
	return result+1;
	else
	return result;
}
