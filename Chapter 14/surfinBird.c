/*“Surfin’ Bird Test Struct”

Define a struct to test find_the_word() from Performance Lab I.5.a-4

char * find_the_word(char * sentence_ptr, char * searchWord_ptr, int * errorCode_ptr);
Your struct should include:

Input string (sentence_ptr)
Input search word (searchWord_ptr)
Expected return value (char *)
Expected error code (*(errorCode_ptr))
Only Address Arithmetic is permitted

Print the human-readable results

Test input should include, at a minimum, the following situations:

Normal input
sentence_ptr is NULL
searchWord_ptr is NULL
errorCode_ptr is NULL
Two occurrences of searchWord
No occurrences of searchWord*/
/*
Onawa Lanier
27 Feb 2019
Practicing with Structs
*/
#include <stdio.h>
#include <string.h>

/* Error code default value */
#ifdef DEFAULT_ERROR_CODE
#undef DEFAULT_ERROR_CODE
#endif
#define DEFAULT_ERROR_CODE 90318

/* Just in case NULL was undefined... */
#ifndef NULL
#define NULL ((void*) 0)
#endif

/* Error code for success */
#ifdef ERROR_CODE_SUCCESS
#undef ERROR_CODE_SUCCESS
#endif
#define ERROR_CODE_SUCCESS ((int)1)

/* Error code if sentence_ptr is NULL */
#ifdef ERROR_NULL_SENTENCE_POINTER
#undef ERROR_NULL_SENTENCE_POINTER
#endif
#define ERROR_NULL_SENTENCE_POINTER ((int)-1)

/* Error code if searchWord_ptr is NULL */
#ifdef ERROR_NULL_SEARCH_POINTER
#undef ERROR_NULL_SEARCH_POINTER
#endif
#define ERROR_NULL_SEARCH_POINTER ((int)-2)

/* Error code is the string in searchWord_ptr can not be found in the string located at sentence_ptr */
#ifdef ERROR_SEARCH_NOT_FOUND
#undef ERROR_SEARCH_NOT_FOUND
#endif
#define ERROR_SEARCH_NOT_FOUND ((int)-3)

/* Standard array size for manual dimension declaration */
#ifdef BUFF_SIZE
#undef BUFF_SIZE
#endif
#define BUFF_SIZE 1024


    char * find_the_word(char * sentence_ptr, char * searchWord_ptr, int * errorCode_ptr); //declares findtheword function

    struct SurfinBirdTestStruct //declares test struct
    {
        char *inputString_ptr;
        char *searchWord_ptr;
        char *expectedReturn_ptr;
        int *ErrorCode_ptr;
    };

int main()
{
    //counter variables
    int numTestsRun = 0;
    int numTestsPassed = 0;

    int putErrorCodeHere = DEFAULT_ERROR_CODE; //Holds variable until findtheword function defines an error
    char * tempReturnValue_ptr = NULL; //stores the return value from findtheword function
    int errorCode[] = {putErrorCodeHere}; //Holds returned error code from findtheword function

    /*TEST #1: Normal Input*/
    char testInput1[] = {"This is also normal input. The 'bird' is the word."};
    char testKey1[] = {"bird"};

    struct SurfinBirdTestStruct normalInput; //stores values into struct
    normalInput.inputString_ptr = testInput1;
    normalInput.searchWord_ptr = testKey1;
    normalInput.expectedReturn_ptr = &testInput1[32]; //memory address of the first char of the search word
    normalInput.ErrorCode_ptr = errorCode; 

    tempReturnValue_ptr = find_the_word(normalInput.inputString_ptr, normalInput.searchWord_ptr,normalInput.ErrorCode_ptr);
    if(tempReturnValue_ptr == normalInput.expectedReturn_ptr)
    {
        printf("Normal Input Test: PASSED\n");
        numTestsPassed++;
    }
    else
    {
        printf("Normal Input Test:  FAIL\n");
    }
    numTestsRun++;

    /*TEST #2: inputString_ptr is NULL */
    char *testInput2 = NULL;
    char testKey2[] = {"No Matter"};
    putErrorCodeHere = DEFAULT_ERROR_CODE;
    errorCode[0] = ERROR_NULL_SENTENCE_POINTER;

    struct SurfinBirdTestStruct sentencePtrNull;
    sentencePtrNull.inputString_ptr = testInput2;
    sentencePtrNull.searchWord_ptr = testKey2;
    sentencePtrNull.expectedReturn_ptr = NULL;
    sentencePtrNull.ErrorCode_ptr = errorCode;

    tempReturnValue_ptr = find_the_word(sentencePtrNull.inputString_ptr, sentencePtrNull.searchWord_ptr, sentencePtrNull.ErrorCode_ptr);

    if(tempReturnValue_ptr == sentencePtrNull.expectedReturn_ptr)
    {
        printf("NULL sentence_ptr Test:  PASSED\n");
        numTestsPassed++;
    }
    else
    {
        printf("NULL sentence_ptr Test:  FAIL\n");
    }
    numTestsRun++;

    /*TEST #3: searchWord_ptr is NULL*/
    char testInput3[] = { "Normal test input. 'The' is search key." };
    char *testKey3 = NULL;
    putErrorCodeHere = DEFAULT_ERROR_CODE;              //Reset placeholder and array storage.
    errorCode[0] = putErrorCodeHere;

    struct SurfinBirdTestStruct searchWordPtrNull;              //Store values into struct
    searchWordPtrNull.inputString_ptr = testInput3;
    searchWordPtrNull.searchWord_ptr = testKey3;
    searchWordPtrNull.expectedReturn_ptr = NULL;
    searchWordPtrNull.ErrorCode_ptr = errorCode;

    tempReturnValue_ptr = find_the_word(searchWordPtrNull.inputString_ptr, searchWordPtrNull.searchWord_ptr, searchWordPtrNull.ErrorCode_ptr);
    if(tempReturnValue_ptr == searchWordPtrNull.expectedReturn_ptr)         //Runs if NULL is returned.
    {
        printf("NULL searchWord_ptr Test: SUCCESS\n");
        numTestsPassed++;
    }
    else
    {
        printf("NULL searchWord_ptr Test: FAIL\n");
    }
    numTestsRun++;

    /*TEST #4: errorCode_ptr is NULL*/
    char *testInput4 = {"This doesn't matter b/c it returns error."};
    char *testKey4 = {"matter"};


    struct SurfinBirdTestStruct errorCodePtrNull;               //Store values into struct
    errorCodePtrNull.inputString_ptr = testInput4;
    errorCodePtrNull.searchWord_ptr = testKey4;
    errorCodePtrNull.expectedReturn_ptr = NULL;
    errorCodePtrNull.ErrorCode_ptr = NULL;

    tempReturnValue_ptr = find_the_word(errorCodePtrNull.inputString_ptr, errorCodePtrNull.searchWord_ptr, errorCodePtrNull.ErrorCode_ptr);
    if(tempReturnValue_ptr == errorCodePtrNull.expectedReturn_ptr)      //Runs if NULL is returned.
    {
        printf("NULL errorCode_ptr Test: SUCCESS\n");
        numTestsPassed++;
    }
    else
    {
        printf("NULL errorCode_ptr Test: FAIL\n");
    }
    numTestsRun++;

    /*TEST #5: Two Occurences of SearchWord*/
    char *testInput5 = {"This string is an example of a string that has two occurrences of the word 'is'."};
    char *testKey5 = {"is"};
    putErrorCodeHere = DEFAULT_ERROR_CODE;          //Reset placeholder and array storage.
    errorCode[0] = putErrorCodeHere;

    struct SurfinBirdTestStruct twoSearchWords;             //Store values into struct
    twoSearchWords.inputString_ptr = testInput5;
    twoSearchWords.searchWord_ptr = testKey5;
    twoSearchWords.expectedReturn_ptr = NULL;
    twoSearchWords.ErrorCode_ptr = errorCode;

    tempReturnValue_ptr = find_the_word(twoSearchWords.inputString_ptr, twoSearchWords.searchWord_ptr, twoSearchWords.ErrorCode_ptr);
    if(tempReturnValue_ptr == twoSearchWords.expectedReturn_ptr)            //Runs if NULL is returned.
    {
        printf("Two Occurences of Search Word Test: SUCCESS\n");
        numTestsPassed++;
    }
    else
    {
        printf("Two Occurences of Search Word Test: FAIL\n");
    }
    numTestsRun++;

    /*TEST #6: No Occurences of SearchWord*/
    char *testInput6 = {"You can't find a key here!"};
    char *testKey6 = {"scrub"};
    putErrorCodeHere = DEFAULT_ERROR_CODE;              //Reset placeholder and array storage.
    errorCode[0] = putErrorCodeHere;

    twoSearchWords.ErrorCode_ptr = errorCode;
    struct SurfinBirdTestStruct lacksSearchWord;               //Store values into struct
    lacksSearchWord.inputString_ptr = testInput6;
    lacksSearchWord.searchWord_ptr = testKey6;
    lacksSearchWord.expectedReturn_ptr = NULL;
    lacksSearchWord.ErrorCode_ptr = errorCode;

    tempReturnValue_ptr = find_the_word(lacksSearchWord.inputString_ptr, lacksSearchWord.searchWord_ptr, lacksSearchWord.ErrorCode_ptr);
    if(tempReturnValue_ptr == lacksSearchWord.expectedReturn_ptr)       //Runs if NULL is returned.
    {
        printf("No Occurences of Search Word Test: SUCCESS\n");
        numTestsPassed++;
    }
    else
    {
        printf("No Occurences of Search Word Test: FAIL\n");
    }
    numTestsRun++;

    printf("\n");
    printf("%i OUT OF %i TESTS PASSED\n", numTestsPassed, numTestsRun);
}

char * find_the_word(char * sentence_ptr, char * searchWord_ptr, int  *errorCode_ptr)
{
    char *returnValue = NULL;

	//Error Handling
    if(sentence_ptr == NULL)
    {
		//Sets errorcode pointer to the correct error.
        *errorCode_ptr = ERROR_NULL_SENTENCE_POINTER;
        return returnValue;
    }
    else if(searchWord_ptr == NULL)
    {
		//Sets errorcode pointer to the correct error.
        *errorCode_ptr = ERROR_NULL_SEARCH_POINTER;
        return returnValue;
    }
    else if(errorCode_ptr == NULL)
    {
        return returnValue;
    }
	//Loops for the length of the sentence pointer.
	for(int i = 0; i < strlen(sentence_ptr); i++)
    {
		//Prevents the passed search word from being longer than the passed sentence.
        if((strlen((sentence_ptr)) - strlen(searchWord_ptr)) >= 0)
        {
			//Loops for the length of the searchword pointer.
            for(int j = 0; j < strlen(searchWord_ptr); j++)
            {
				//Break out of loop if the search word is not within the sentence.
                if(*(sentence_ptr + i + j) != *(searchWord_ptr + j))
                {
                    break;
                }
                //Run successfully if the incrementing variable = the last index of the searchword.
                //& if the error code pointer has already been set to success.
                else if((j == strlen(searchWord_ptr) - 1) && *errorCode_ptr == ERROR_CODE_SUCCESS)
                {
                    returnValue = NULL;
                }
				//Run successfully if the incrementing variable = the last index of the searchword.
                //& if error code hasn't been set yet.
                else if(j == strlen(searchWord_ptr) - 1 && *errorCode_ptr == DEFAULT_ERROR_CODE)
                {
                    *errorCode_ptr = ERROR_CODE_SUCCESS;
                    returnValue = &sentence_ptr[i];
                }
            }
		}
			
    }
    //If searchword can't be found.
    if(returnValue == NULL)
    {
        *errorCode_ptr = ERROR_SEARCH_NOT_FOUND;
    }
    return returnValue;
}

