/*
 * This is a very simple program demonstrating the use of structs
 * and arrays made of structs.
 * There are two simple loops, one for storing the users input and
 * one for printing it.
 * In later updates of this code, I might also add a sorting algorithm
 * for the struct array. 
 * 
 * The inspiration for this piece of code was an exercise from
 * Steve Oualline's book on C programming. This is not the solution
 * to the exercise however. 
 * 
 * Author: Panagiotidis Anastasios
 * December 2017
 * 
 * This exercise was taken from page 156 of:	
 * Practical C Programming, by Steve Oualline
 * O'Reilly & Associates, Inc.
 * */

#include <stdio.h>
#define MAX_USERS 2/*the size of the array that contains the user info*/

/* struct for storing mailing info.
 * cointains -- name
 *           -- address
 * */
struct mailing
{
	char name[60];
	char address[60];
};

char line[200]; /*for toring the user's input*/
struct mailing users[MAX_USERS]; /*array of mailing(struct) used for storing*/
int i; /*counter for the loop*/

int main()
{
	(void)printf("------MAILING SERVICE------\n");
	(void)printf("USE: add the mailing info (name,address) for %d user(s).\n",MAX_USERS);
	
	for(i =0; i<MAX_USERS; i++)
	{
		(void)printf("USER #%d\n",i+1);
		(void)printf("name: ");
		/*read input (name) and store in line*/
		(void)fgets(line, sizeof(line), stdin);
		(void)sscanf(line, "%s", users[i].name);
		/*read address and strore it*/
		(void)printf("addess: ");
		(void)fgets(line, sizeof(line), stdin);
		(void)sscanf(line, "%s", users[i].address);
	}
	
	(void)printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n   PRINTING the mailing info\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
	
	for(i=0; i<MAX_USERS; i++)
	{
		(void)printf("USER #%d\n",i+1);
		(void)printf("name: %s",users[i].name);
		(void)printf("\n");
		(void)printf("address: %s",users[i].address);
		(void)printf("\n");
	}
	
	(void)printf("byebye\n");
	return 0;
}
	

