#include <stdio.h>

int main(void)
{
	int myIntArray[10] = {100,100,100,100,100,100,100,100,100,100};


	float myFloatArray[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
	char myCharArray[256] = {0};

	// END INIT ARRAYS

	//int index = 0;

	printf("%d \n", myIntArray[2]);
	printf("%f \n", myFloatArray[2]);
	printf("%c \n", myCharArray[2]);

	myIntArray[0] = (0+1) *10;

	printf("%d \n", myIntArray);

	return 0;
}