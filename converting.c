// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS 
#define BUFFER_SIZE 80													//Sets max buffer size of acceptable inputs
#include "converting.h"													

// [input - process - output ]
	// input will be a numeric string that the user is prompted to enter
	// process will be converting that inputted numeric string into an integer
	// output will be an integer number



void converting() {
	/* Version 1 */
	printf("*** Start of Converting Strings to int Demo *** \n");		//Prints intro of application
	char intString[BUFFER_SIZE];										//Stores input from user here with max length equaling buffer size set
	int intNumber;														//Stores converted number/output of converting function here
		
	do {																//Requests numeric string from user
		printf("Type an int numeric string (q - to quit):\n"); 
		fgets(intString, BUFFER_SIZE, stdin);							//Receives and stores information presented to function such as input and buffer size set
		intString[strlen(intString) - 1] = '\0';						//Sets null terminator
		if (strcmp(intString, "q") != 0) {								//Checks if input was "q" 
			intNumber = atoi(intString);								//Converts character string entered into integer value 
			printf("Converted number is %d\n", intNumber);				//Prints integer value
		}
	} while (strcmp(intString, "q") != 0);								//Program will loop until Input 'q' is given to quit the program
	printf("*** End of Converting Strings to int Demo***\n\n");			//Prints conclusion of application


		///* Version 2 */
	printf("*** Start of Converting Strings to double Demo ***\n");		//Prints intro of application of V2
	char   doubleString[BUFFER_SIZE];									// Stores double typed input from user here with max length equaling buffer size set
	double doubleNumber;												//Stores converted double number/output of converting function here
	do {
		printf("Type the double numeric string (q - to quit):\n");      //Requests double numeric string from user
		fgets(doubleString, BUFFER_SIZE, stdin);						//Receives and stores information presented to function such as input and buffer size set
		doubleString[strlen(doubleString) - 1] = '\0';					//Sets null terminator
		if ((strcmp(doubleString, "q") != 0)) {							//Checks if input was "q" 
			doubleNumber = atof(doubleString);							//Converts character string entered into double value
			printf("Converted number is %f\n", doubleNumber);			//Prints double numeric value
		}
	} while (strcmp(doubleString, "q") != 0);							//V2 of Program will loop until Input 'q' is given to quit the program
	printf("*** End of Converting Strings to double Demo ***\n\n");		//Prints conclusion of V2 application

	
	
	
	
	
}


		///* Version 3 */
		//>> insert here


