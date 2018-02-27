#include <stdio.h>

/*
 * A very simple program that calculates the volume
 * of a sphere using the equation: 4/3*pi*r^3
 * where pi is a mathematical constant
 * and r is the radius of the sphere.
 * 
 * Author: Panagiotidis Anastasios
 * December 2017
 * 
 * This exercise was taken from page 56 of:	
 * Practical C Programming, by Steve Oualline
 * O'Reilly & Associates, Inc.	
 */

#define pi 3.14 /*The constant number of pi.*/

char line[100]; /*an array for storing the input from the user.*/
float radius;   /*the radius of the sphere.*/
float volume;   /*the volume of the sphere.*/


int main()
{
	
	/* Small Menu */
	(void)printf("\n-> A very simple program that calculates the volume\n");
	(void)printf("-> of a sphere using the equation: 4/3*pi*r^3\n");
	(void)printf("-> where pi is a mathematical constant\n");
	(void)printf("-> and r is the radius of the sphere.\n");
	(void)printf("->\n");
	(void)printf("-> Author: Panagiotidis Anastasios\n");
	(void)printf("-> December 2017\n");
	(void)printf("+-------------------------------------------------------------+\n\n");
	
	
	
	 while(1) /* This loop ends at a break statement.*/
	 {
	   /*Get the radius from the user.*/
	   (void)printf("Type in the radius of the sphere, please.\n");
	   (void)fgets(line, sizeof(line), stdin);
	   (void)sscanf(line, "%f", &radius);
	
	   /* Check if the radius is a legal number.
	    * If it is, then break. If it isn't, keep getting input.*/
	    if(radius >= 0.0)
	   {
           break;
	   }
	    else
	    {
		    (void)printf("ERROR: The radius can't be a negative number.\n");
	    }
     }
	 
	 volume = 4.0/3 * pi * (radius*radius*radius); /*Calculating volume using the equation.*/
	 
	 /*printing results and ending the program.*/
	 (void)printf("The volume of the sphere is: %.2f\n",volume);
	 return 0;
	
}
