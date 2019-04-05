
 // What does this program do?
 #include <stdio.h>
 #define SIZE 10

 // function prototype
 void someFunction(const int b[], size_t startSubscript, size_t size);  //function takes array and to sizes

 // function main begins program execution
 int main(void)
 {
    int a[ SIZE ] = { 8, 3, 1, 2, 6, 0, 9, 7, 4, 5 }; // initialize array

    puts("Answer is:");
    someFunction( a, 0, SIZE );                     //calls function and sends array value, 0, and size 10
    puts( "" );
 }                                                  // end main

                                                    // What does this function do?
 void someFunction(const int b[], size_t startSubscript, size_t size)
 {
    if (startSubscript < size)                    // if 0 is less than 10, run function (will occur 10x, 1-9)
        {
        someFunction(b, startSubscript + 1, size);  // function calls again, takes array value at position 10, increments index by one
        printf("%d ", b[startSubscript]);           // prints point in array (reverses array and prints backwards)
        }                                           // end if
 }                                                  // end function someFunction