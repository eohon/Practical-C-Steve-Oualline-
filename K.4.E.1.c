#include <stdio.h>

/**********************************************************	
 *	This is a very simple program that                    *
 *	converts Centigrade to Fahrenheit.                    *
 *	The user types in the degrees                         *
 *	in Centigrade and the program prints                  *
 *	the Fahrenheit equivalent on the screen (stdin).      *
 *                                                        *
 *	Author: Panagiotidis Anastasios                       *
 *  December 2017                                         * 
 *							                              *
 *	This exercise was taken from page 56 of:	          *
 *	Practical C Programming, by Steve Oualline	          *
 *	O'Reilly & Associates, Inc.			                  *
 **********************************************************/


char line[100]; /*An array to store the user's input.*/
float C; 		/*For storing the degrees in Centigrade.*/
float F; 		/*For storing the degrees in Fahrenheit.*/

/* 
	The mathematical equation used for the conversion is:
	F = 9/5 * C + 32
*/

int main()
{

/* Small Menu */

(void)printf("\n+-------------------------------------------------------------+\n");
(void)printf("| This is a very simple program that                          |\n");
(void)printf("| converts Centigrade to Fahrenheit.                          |\n");
(void)printf("| The user types in the degrees                               |\n");
(void)printf("| in Centigrade and the program prints                        |\n");
(void)printf("| the Fahrenheit equivalent on the screen (stdin).            |\n");
(void)printf("| Author: Panagiotidis Anastasios, December 2017              |\n");
(void)printf("+-------------------------------------------------------------+\n\n");



/*Having the user type in the degrees: */
(void)printf("Type in the degrees in Celsious, please.\n");
(void)fgets(line, sizeof(line), stdin); /*Storing the input in the array named line.*/
(void)sscanf(line, "%f", &C); /*Get the number from the array and place it in the varriable C*/

/* Check if the var C is less than -273*/
if( C < -273.15)
{
	(void)printf("ERROR:The lowest possible degree is -273.15 Celsious.\n");
}
else
{
	F = 9.0/5 * C + 32; /* Converting to Farhenheit*/
	(void)printf("Farhenheit: %.2f\n",F);
}

return 0;

}
