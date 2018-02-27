/**********************************************************
 *                       PROCEDURE                        *
 * rep -- replaces the '-' with a '_' in a char array     *
 *                                                        *
 * <Parameters>                                           *
 * --the char array (string)                              *
 *                                                        *
 * <returns>                                              *
 * a char array - string                                  *
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

char* rep(char string[])
{
        int i; /* used as an index in the for loop */

        for( i =0; string[i] != '\0' ; i++)
        {
                if( string[i] == '-')
                string[i] = '_';
        }

        return string;
}

