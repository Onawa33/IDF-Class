#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TestCode.h"

/////////////////////////////////////////////////////////////
// Test 1: For this task, you will receive two pointers to NULL terminated strings: 
//		   a 'sentence', and a 'word'. The objective will be to delete (in place) the first 
//		   occurrence of 'word' in the sentence. 
//
// Expected Return Values:
//		- the task is successful: should return ERROR_SUCCESS (0).
//		- provided parameters are bad: should return ERROR_INVALID_PARAMETER (87)
//		- the provided 'word' is not part of 'sentence': should return ERROR_NOT_FOUND (1168)
/////////////////////////////////////////////////////////////

int deleteWord(char * sentence, char * word);   //Function declaration sends sentence and search word, returns char
int checkString(char str1[]);					//Function checks for alpha and spaces, returns bool
//int clear_input();

int main()
{
	char userSentence[256] = { 0 };		//stores string input
	char userWord[256] = { 0 };			//stores user search word
	
	printf("Enter a sentence:   \n");
	fgets(userSentence, sizeof(userSentence), stdin);	//stores user sentence
	if (userSentence[0] == '\n')						//if they entered nothing
	{
		printf("Nothing entered. Please try again.\n");  //Ask them to try again
			return 0;
	}
	else
	{
		printf("Enter search word: ");
		fgets(userWord, sizeof(userWord), stdin);		//Stores user search and its size
		//char *pos = strchr(userWord, '\n');				//hacky way to get rid of \n at end of string(from fgets())
		//if (pos) *pos = 0;                              //Sets location of \n to 0

		if (userWord[0] == '\n')						//Error handling checks for no input
		{
			printf("ERROR_INVALID_PARAMETER (87)");
			return 0;
		}
		else if (checkString(userWord) == 0)				//Error handling for bad input
		{
			printf("ERROR_INVALID_PARAMETER (87)");
		}
		else
		{
			deleteWord(userSentence, userWord);				//calls delete function if error handling passed
			if (deleteWord(userSentence, userWord) == 0)	//prints ERROR_SUCCESS if successful
			{
				printf("ERROR_SUCCESS(0)");
			}
			printf("\n\nString after removing '%s' : \n%s", userWord, userSentence);
		}
	}
}	//end of main

int checkString(char str1[])						//function to check for alpha chars and spaces only, returns bool
{
	int i, x = 0, p;
	p = strlen(str1);
	for (i = 0; i < p; i++)
	{
		if ((str1[i] >= 'a' && str1[i] <= 'z') || (str1[i] >= 'A' && str1[i] <= 'Z') || (str1[i] == ' '))
		{
			continue;
		}
		else { return 0; }
	}
	return 1;
}

int deleteWord(char* userSentence, char* userWord)
{
	int status = 0;								// May want to replace this at some point

	//char *searchPtr;										//Declare char pointer
	//searchPtr = strstr(userSentence, userWord);			//Set it to the location of search word

	//if (searchPtr != NULL)								//If searchword is found
	//{
		int i, j, stringLen, toRemoveLen;
		int found;

		stringLen = strlen(userSentence);       // Length of sentence
		toRemoveLen = strlen(userWord);			// Length of word to remove


		for (i = 0; i <= stringLen - toRemoveLen; i++)   //
		{
			found = 1;								// Match word with string
			for (j = 0; j < toRemoveLen; j++)
			{
				if (userSentence[i + j] != userWord[j])
				{
					found = 0;
					printf("ERROR_NOT_FOUND (1168)");      //Print if search word doesn't exist
					status = 1;
					break;
				}
			}
		}
		if (found == 1)
		{
			for (j = i; j <= stringLen - toRemoveLen; j++)
			{
				userSentence[j] = userSentence[j + toRemoveLen];
			}

			stringLen = stringLen - toRemoveLen;

			// We will match next occurrence of word from current index.
			i--;
			status = 0;
		}
	

	return status;
}


/////////////////////////////////////////////////////////////
// Test 3 (part one): This task will involve allocating a buffer
//				of (sizeOfData) bytes, and reading up to that amount
//				into it from the file specified in 'filename'. Additionally,
//				the data in the file has been pseudo-encryped (poorly) with a single-
//				byte XOR, which you will be required to undo (the byte that the buffer
//				was XOR'd against will be provided in 'key'). Finally, assuming the task
//				was successful, (and all pointers are valid) the pointer to the resulting 
//				buffer should be stored in the area referenced by buffPtr.
//
// Expected Return Values:
//			- task was completed successfully: ERROR_SUCCESS (0)
//			- bad input was provided: ERROR_INVALID_PARAMETER (87)
//			- you were unable to allocate enough memory: ERROR_OUTOFMEMORY (14)
//			- you were unable to open the file: ERROR_OPEN_FAILED (110)
/////////////////////////////////////////////////////////////
int decodeFromFile(char* filename, unsigned int sizeOfData, unsigned char key, void** buffPtr)
{
	int status = ERROR_SUCCESS; // May want to replace this at some point

	//code

	return status;
}

/////////////////////////////////////////////////////////////
// Test 3 (part two): The second part of the task; this simply requires you
//				  to appropriately free the buffer allocated in the last task
//				  (if possible).
//
// Expected Return Values:
//			- the task completed successfully: TRUE
//			- the task failed/bad input: FALSE
/////////////////////////////////////////////////////////////
BOOL freeDecodedBuffer(void* buffer)
{
	BOOL out = FALSE; // May want to replace this at some point

	//code

	return out;
}
