


// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS

#define BUFFER_SIZE 300
#include "tokenizing.h"
	// [input - process - output ]
	// input will be string that user is promted to enter
	// process will be tokenizing it i.e. treating each word as an independent word which if precceded and proceded by space
	// output will be the final printing of tokens one by one.
// V1
int main(void)
{
	/*
	printf("*** Start of Tokenizing Words Demo ***\n");
	
	char words[BUFFER_SIZE];  // user input of entire entire string
	char* nextWord = NULL;
	int wordsCounter;  // number of tokenized words inside user string
	// loop  begins:--user enters string to be broken into individual tokens according to a blank/space separator. User inputs "q" to quit the input/process/output cycle 
	do
		{
			printf("Type a few words separated by space (q - to quit):\n");
			//INPUT
			//expected input:--user enters a series of strings seperated by space and it is bound to be less than BUFFER_SIZE -1
			
			fgets(words, BUFFER_SIZE, stdin);
			                                         // PROCESS
				words[strlen(words)	- 1]	= '\0'; // line of code to determine the total length of string
				if (strcmp(words, "q") != 0)       // executing condition i.e if user enters only q this block will be bypassed and the outer d0-while loop condition will be checked
				{
					nextWord = strtok(words, " "); // in this line each word of the line will be tokenized i.e breaken down to smaller strings
					wordsCounter = 1;       // word counnter is initialized this will keep track of number of words/tokens processed i.e tokenized
					                                                                        
					                                                      //OUTPUT
					while (nextWord)                                     // a looping condition is  initiated that  will be responsible for output i.e. printing individual words with their numbers
					{

						printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
						nextWord = strtok(NULL, " ");                    // acts as an exiting condition as the string entered has ended and the last character is a null character
					}
				}
	    } while (strcmp(words, "q") != 0);                           //this is condition which governs exit to the program as soon as user enters q the operations and stopped and program ends.
				printf("*** End of Tokenizing Words Demo ***\n\n");      //FEEL GOOD STATEMENT it ensures user that he has succesfully exited the program.



	
//if user enters unexpected input of a single long string that will also work as the code will treat it as a/ single token
   //V1 ends
   // 
   // 
   // 
   //V2 begins
*/

	// [input - process - output ]
	// input will be string that user is promted to enter
	// process will be tokenizing it i.e. treating each phrase as an independent phrase which if precceded and proceded by ","
	// output will be the final printing of tokens one by one.

    printf("*** Start of Tokenizing Phrases Demo ***\n");
    char phrases[BUFFER_SIZE];
    char* nextPhrase = NULL;
	int  phrasesCounter;  // number of tokenized words inside user string
	// loop  begins:--user enters string to be broken into individual tokens according to a "," separator. User inputs "q" to quit the input/process/output cycle 
	
	do
	{
		   printf("Type a few phrases separated by comma (q to quit):\n"); 
		   //INPUT
	       //expected input:--user enters a series of strings  or phrases seperated by "," and it is bound to be less than BUFFER_SIZE -1
		   fgets(phrases, BUFFER_SIZE, stdin);
		   phrases[strlen(phrases) - 1] = '\0';
		                                               //Process
	   if ((strcmp(phrases, "q") != 0))               // Line of code to check exiting condition i.e if user enters q this block of code will be overlooked
	   {
		   nextPhrase = strtok(phrases, ",");         // Code to tokenize using strinng tokenizing.
		   phrasesCounter = 1;                        // This is counter set to keep the count of total phrases entered
		                                              //Output
		   while (nextPhrase)                        // a looping condition is  initiated that  will be responsible for output i.e. printing individual phrases or words with their numbers 
		   {
			   printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
			   nextPhrase    = strtok(NULL, ",");     // acts as an exiting condition as the string entered has ended and the last character is a null character 
		   }
	   }
    } while (strcmp(phrases, "q") != 0);          //this is condition which governs exit to the program as soon as user enters q the operations and stopped and program ends.
        printf("*** End of Tokenizing Phrases Demo **** **\n\n");
		
		// V2 ends 
		// 
		// 
		// 
		

		
}