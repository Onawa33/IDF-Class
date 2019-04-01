
 // What does this program do?


 #include <stdio.h>
 #define SIZE 10  // a header file that sets size to 10

 int whatIsThis( const int b[], size_t p ); 	// function prototype that takes an int array and a size

 
 int main( void )                          	// function main begins program execution
 {
 int x; 					// holds return value of function whatIsThis

 						// initialize array a
 int a[ SIZE ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };	// array called "a" of nums 1-10, size is set by header at 10

 x = whatIsThis( a, SIZE );			// calls function whatIsThis and stores answer in x variable

 printf( "Result is %d\n", x );
 } 						// end main

 						// what does this function do? 
 int whatIsThis( const int b[], size_t p )
{
 						// base case
 if ( 1 == p ) 
{						// if 1 is equal to the size received
 return b[ 0 ];
 } 						// end if
 else { 					// recursion step
 return b[ p - 1 ] + whatIsThis( b, p - 1 );
 } 						// end else
 } 						// end function whatIsThis