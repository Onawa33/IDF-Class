#include <Windows.h>
#include <stdio.h>
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


int deleteWord(char * userSentence, char * userWord)
{
	int status = ERROR_SUCCESS;													//May want to replace this at some point
	//declare a pointer
	char *searchPtr;
	//declare a start index
	int index = 0;


	if (userSentence == NULL || userWord == NULL)								//if they entered nothing
	{
		return ERROR_INVALID_PARAMETER;
	}
	else
	{
		searchPtr = strstr(userSentence, userWord);								//Set pointer to the location of search word
		if (searchPtr == NULL)
		{
			status = ERROR_NOT_FOUND;
		}
		else
		{
			index = strlen(userSentence) - strlen(searchPtr);					//finds index to beginning of search word
																				//removes search word, replaces with rest of sentence
			for (size_t i = index, j = (index + strlen(userWord)); j  <= strlen(userSentence); i++, j++)
			{
				userSentence[i] = userSentence[j];
			}
			status = ERROR_SUCCESS;
		}
	}


	return status;
}


/////////////////////////////////////////////////////////////
// Test 3 (part one): This task will involve allocating a buffer
//				of (sizeOfData) bytes, and reading up to that amount
//				into it from the file specified in 'filename'. Additionally,
//				the data in the file has been pseudo-encrypted (poorly) with a single-
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

	if (filename == NULL || sizeOfData == 0 || key == NULL || buffPtr == NULL)		//if they entered nothing
	{
		return ERROR_INVALID_PARAMETER;
	}

	FILE * fp = fopen(filename, "r");					//opens the file to be read

	if (fp == NULL)										//checks that file opened
	{
		return ERROR_OPEN_FAILED;
	}

	char * buffer = (char*)malloc(sizeOfData);			//creates a buffer pointer and allocates memory

	if (buffer == NULL)
	{
		fclose(fp);										//closes file
		return ERROR_OUTOFMEMORY;
	}

	char temp;
	int iterator = 0;

	while (!feof(fp))
	{
		temp = fgetc(fp);								//pulls in file one char at a time
		temp = temp ^ key;								//xor char against key
		buffer[iterator] = temp;						//stores temp into index inside buffer
		iterator++;										
	}

	fclose(fp);											//closes file
	*buffPtr = buffer;									//saves decrypted buffer into buffer pointer for later use

	return ERROR_SUCCESS;
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
	if (buffer == NULL)				//if there's nothing in the buffer
	{
		return FALSE;
	}
	
	free(buffer);					//freee the buffer
	buffer = NULL;					//make sure it's really free

	return TRUE;
}
