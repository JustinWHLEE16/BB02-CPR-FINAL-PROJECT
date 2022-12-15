/*
Name                        : -Anirudh
Email ID                    : anirudh1@myseneca.ca
Student ID                  : 175010214
Date written                : 30th November, 2022
Course                      : CPR101_NAA
Project [fundamentals.c] : FUNDAMENTALS MODULE SOURCE

Purpose : This program gets the string from the user as an input and returns the character from the string by prompting to enter character's position or index.
*/

#define _CRT_SECURE_NO_WARNINGS	  // to avoid warning relatd to library functions.
#define BUFFER_SIZE     80        // Max size of string that can hold characters. 
#define NUM_INPUT_SIZE  10        // Max size of character position that can return from string(upto 10 digits).
/*
HEADER FILE INCLUDES:

***** Library Functions *****
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

***** Function Prototype *****
int fundamentals(void);
*/
#include "fundamentals.h"        


//***************** VERSION 1 *****************

/*
This function gets the string from the user as an input and returns the character from the string by prompting to enter character's position or index.
*/
int fundamentals(void) {
	
	printf("*** Start of Indexing Strings Demo ***\n");
	char buffer1[BUFFER_SIZE];			// string with limit of characters upto BUFFER_SIZE
	char numInput[NUM_INPUT_SIZE];		// string stores input position of character
	size_t position;					// position of resulted character  
	
	/*
	 -> This loop will get string of characters as an input and then prompt to enter the index from which position of string character needs to be extracted. Then the result of index of string will be displayed.
	 -> Loop will continue to iterate until user enters 'q' when prompted to enter string of characters. Loop will end if string will be only 'q' and program will continue to next piece of code. 
	*/
	do {
		printf("Type not empty string (q - to quit):\n");
		fgets(buffer1, BUFFER_SIZE, stdin);	        // get and stores the input as a string with limit of characters upto BUFFER_SIZE
		buffer1[strlen(buffer1) - 1] = '\0';		// set last position of character string to NULL terminator
		
		/*
		Upto here, string of character is successfully stored in the variable. Next, if struct will check input whether it is 'q' or not. If it is not 'q' it will prompt to enter the index of character to return the character at that position. Otherwise it will exit out of the loop.
		*/
		if (strcmp(buffer1, "q") != 0) {
			printf("Type the character position within the string:\n");
			fgets(numInput, NUM_INPUT_SIZE, stdin);		// get and stores the input of a position from which to extract character. 
			numInput[strlen(numInput) - 1] = '\0';		// set last position of position string to NULL terminator 
			position = atoi(numInput);					// assigning entered position of character to resulted position

			/*
			Upto here, it is understood that string of character is not 'q' but some other characters are stored in string and position of extracted character is successfully stored in the variable. Now, if the input position is greater than the size of string, it will display error message as well as last character of the string. Otherwise it will display character at that position as a result.
			*/
			if (position >= strlen(buffer1)) {
				position = strlen(buffer1) - 1;		// set resulted position of character to last position of character string
				printf("Too big... Position reduced to max. available\n");
			}
			printf("The character found at %d position is \'%c\'\n", (int)position, buffer1[position]);

		} // checks if the string of characters is 'q' or not. If it is, exit out of the loop.

	} while (strcmp(buffer1, "q") != 0);		// do-while loop will continue to iterate until the user enters 'q' when prompted to enter string of characters. 
	printf("*** End of Indexing Strings Demo ***\n\n");
	return 0;
}