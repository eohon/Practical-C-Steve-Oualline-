/*********************************************************
 *                       PROCEDURE                       *
 * word_count -- counts the words in a string            *
 *                                                       *
 * <Parameters>                                          *
 * string -- the string whose length we want             *
 *                                                       *
 * <Returns>                                             *
 * the length of the string                              *
 *                                                       *
 * <Notes>                                               *
 * A word is defines as a string,meaning the char array. *
 * The character '\0' signals the end of the string,     *
 * and therefor the end of the char array.               *
 *                                                       *
 * <Source Info>                                         *
 * This program was written by Panagiotidis Anastasios   *
 * 26 February 2018 (ariscrazyp@gmail.com)               *
 * Anyone can use this piece of software anyway they     *
 * want.                                                 *
 * This exercise was taken from page 114 of:             *
 * Practical C Programming, by Steve Oualline            *
 * O'Reilly & Associates, Inc.	                         *
 *                                                       *
 *********************************************************/
int word_count(char string[])
{       
	int i = 0; /* used in the loop*/
	int count = 0; /* that's the number of the words*/
	
    /* This while loop repeats until the end of
     * the string, meaning until the string[] 
     * is equal to '\0'.
     * */
      while(string[i] != '\0')
      {
		i++;
		count++;
	  }

      return count; /* the func returns the word count */
}

