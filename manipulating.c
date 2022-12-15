// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80    
#include "manipulating.h" 

/*
   Input: Get two sting inputs from the user
   Process: Concatenates the two string without any whitespaces in between 
   Output: Displays the concatenated string to user.
*/

void manipulating(void) {

	/* Version 1 */
	printf("*** Start of Concatenating String Demo ***\n");

	// Declaring two string variables
	char string1[BUFFER_SIZE]; 
	char string2[BUFFER_SIZE];

	/*
	input loop: 
	take two string inputs from
	the user until he enters 'q' to quit the input cycle.

	*/

	do {
		printf("Type the 1st string (q - to quit):\n"); // input for first string
		fgets(string1, BUFFER_SIZE, stdin);             // stores the user input to string1
		string1[strlen(string1) - 1] = '\0';            // sets null terminator

		/*
		if condition to check if the user does not wants to exit,
		then proceed with concatenation
		*/

		if ((strcmp(string1, "q") != 0))
		{
			printf("Type the 2nd string:\n");    // input for second string
			fgets(string2, BUFFER_SIZE, stdin);  // stores the user input to string2
			string2[strlen(string2) - 1] = '\0'; // sets null terminator
			strcat(string1, string2);			 // concatenating string1 and string2 using strcat
			printf("Concatenated string is \'%s\'\n", string1); // displaying output as concatenated string
		}
	} while (strcmp(string1, "q") != 0);        // iterating until user enter 'q' to quit input cycle
	printf("*** End of Concatenating strings Demo ***\n\n");

	/* Version 2 */


	/* Version 3 */

	return 0;
}