#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"		// Fundamentals function. Contains function prototype for fundamentals function
#include "manipulating.h"		// Manipulationg function. Contains function prototype for manipulating function 
#include "converting.h"			// Converting function header file. Contains function prototype for converting function
#include "tokenizing.h"			// Tokenizing function header file. Contains function prototype for tokenizing function

int main(void)
{
	
	char buff[10];
	do													// Displays selection options to choose which function to run. Input 0 to quit
	{
		printf("1 - Fundamentals\n");
		printf("2 - Manipulation\n");
		printf("3 - Converting\n");
		printf("4 - Tokenizing\n");
		printf("0 - Exit\n");
		printf("Which module to run? \n");
		fgets(buff, 10, stdin);
		switch (buff[0])
		{
		case '1': fundamentals();						// if 1 is selected: run function: fundamentals
			break;
		case '2': manipulating();						// if 2 is selected: run function: manipulating
			break;
		case '3': converting();							// if 3 is selected: run function: converting
			break;
		case '4': tokenizing();							// if 4 is selected: run function: tokenizing
			break;
		}
	} while (buff[0] != '0');							// run program until "0" is inputted
	return 0;

}