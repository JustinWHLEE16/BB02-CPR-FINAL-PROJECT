/*
Name                        : -Anirudh
Email ID                    : anirudh1@myseneca.ca
Student ID                  : 175010214
Date written                : 30th November, 2022
Course                      : CPR101_NAA
Project [fundamentals.c]    : FUNDAMENTALS MODULE SOURCE

Purpose : This program solves three problems in 3 different versions-

	VERSION 1 : This version will get the string from the user as an input and returns the character from the string by
				prompting to enter character's position or index.
	VERSION 2 : This version will get the string of characters as an input and will return number of characters in that string. 
	VERSION 3 : This version will get string of characters as an input and will copy input string to new variable before				  displaying it using new variable.
*/

#define _CRT_SECURE_NO_WARNINGS	  // to avoid warning relatd to library functions.
#define BUFFER_SIZE     80       // Max size of string that can hold characters. 
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

 //*
 //*
 //******************************* VERSION 1 ********************************
 //*
 //*

int fundamentals(void) {
	
	/*
	This version gets the string from the user as an input and returns the character from the string by prompting to enter character's position or index.
	*/
	
	printf("*** Start of Indexing Strings Demo ***\n");
	char buffer1[BUFFER_SIZE];			// an array with limit of characters upto BUFFER_SIZE
	char numInput[NUM_INPUT_SIZE];		// array stores input position of character
	size_t position;					// position of resulted character  

	/*
	do-while loop-
	Input    : get string of characters and position of character to be extracted.
	Action   : extract character at entered position and store position of that character in a variable.
	Output   : Display the character at entered position of string.
	Condition: continue to iterate untill string = 'q'.
	*/
	do {
		printf("Type not empty string (q - to quit):\n");
		fgets(buffer1, BUFFER_SIZE, stdin);	        // get and store input as a string with limit upto BUFFER_SIZE
		buffer1[strlen(buffer1) - 1] = '\0';		// set last position of character string to NULL terminator

		/*
		Upto here, string of characters is successfully stored in the variable and last position of character string is set to NULL. 
		Next, if struct 
		Input    : get position of character from which to extract character.
		Action   : setting last position of position string to NULL and storing entered position of character to new variable.
		Output   : displaying character at the entered index of string.
		Condition: DO NOT perform this action if string = 'q'.
		*/
		if (strcmp(buffer1, "q") != 0) {
			printf("Type the character position within the string:\n");
			fgets(numInput, NUM_INPUT_SIZE, stdin);		// get and store input of a position from which to extract character. 
			numInput[strlen(numInput) - 1] = '\0';		// set last position of position string to NULL terminator 
			position = atoi(numInput);					// assigning entered position of character to resulted position

			/*
			Upto here, it is understood that string of character is not 'q' but some other characters are stored in string and position of extracted character is successfully stored in the variable.
			if struct
			Input     : -
			Action    : set resulted position of character to last position of character string
			Output    : Show error message and as well as last character of string.
			Condition : DO NOT perform this action untill input position is greater than or equal to character string.
			*/
			if (position >= strlen(buffer1)) {
				position = strlen(buffer1) - 1;		// set resulted position of character to last position of character string
				printf("Too big... Position reduced to max. available\n");
			}		// Skip this if struct if position is less than string length.
			printf("The character found at %d position is \'%c\'\n", (int)position, buffer1[position]);

		} // checks if the string of characters is 'q' or not. If it is, skip this if struct.

	} while (strcmp(buffer1, "q") != 0);		// do-while loop will continue to iterate until character string = 'q'.
	printf("*** End of Indexing Strings Demo ***\n\n");

	//*
    //*
	//*********************************** VERSION 2 *********************************
	//*
    //*

	/*
	This version will get the string of characters as an input and will return number of characters in that string. 
	*/

	printf("*** Start of Measuring Strings Demo ***\n");
	char buffer2[BUFFER_SIZE];			// array to store input with character limit upto BUFFER_SIZE
	
	/*
	do-while loop-
	Input     : get string of characters
	Action    : count number of characters in string
	output    : display number of characters in string
	condition : iterate untill string = 'q'
	*/
	do {
		printf("Type a string (q - to quit):\n");
		fgets(buffer2, BUFFER_SIZE, stdin);		// get and store input as a measure string with limit upto BUFFER_SIZE
		buffer2[strlen(buffer2) - 1] = '\0';	// set last position of measure string to NULL

		/*
		Upto here, string of characters is successfully stored in the variable and last position of measure string is set to NULL. 
		Next, if struct 
		Input         : -
		Action/Output : display number of characters in input string.
		Condition     : DO NOT perform action if string = 'q'
		*/
		if ((strcmp(buffer2, "q") != 0)) {
			printf("The length of \'%s\' is %d characters\n", buffer2, (int)strlen(buffer2));
		}		// checks if string of characters is only 'q', skip this if struct.

	} while (strcmp(buffer2, "q") != 0);		// // do-while loop will continue to iterate untill measure string = 'q'.
	printf("*** End of Measuring Strings Demo ***\n\n");
	
 //*
 //*
 //*********************************** VERSION 3 *********************************
 //*
 //*

	/*
	This version will get string of characters as an input and will copy input string to new variable before displaying it using new variable. 
	*/
	
	printf("*** start of Copying Strings Demo ***\n");
	
	/*
	define 2 arrays to store string of characters with limit upto BUFFER_SIZE
	*/
	char destination[BUFFER_SIZE];		 
	char source[BUFFER_SIZE];			
	
	/*
	do-while loop-
	Input     : get and store string of characters.
	Action    : copy input string to new variable.
	Output    : display input string of characters using new variable.
	Condition : iterate untill entered string = 'q'.
	*/
	do {
		destination[0] = '\0';		// set new variable to NULL (empty state)
		printf("Destination string is reset to empty\n");
		printf("Type the source string (q - to quit):\n");
		fgets(source, BUFFER_SIZE, stdin);		// get and store string of characters upto BUFFER_SIZE limit
		source[strlen(source) - 1] = '\0';		// set last position of input variable to NULL
		
		/*
		upto here, string is stored in a variable. New variable and last position of input variable is set to NULL.
		Next, If struct-
		Input     : -
		Action    : copying string from input variable to new variable
		Output    : Displayed copied input string using new variable.
		Condition : DO NOT perform action if string = 'q'
		*/
		if (strcmp(source, "q") != 0) {
		strcpy(destination, source);		// copying string from input variable to new variable
		printf("New destination string is \'%s\'\n", destination);
		
		}		// checks if string not equal to 'q', copy string. 

	} while (strcmp(source, "q") != 0);		//continue to iterate untill input string = 'q' 
	printf("*** End of Copying Strings Demo ***\n\n");

	return 0;
}