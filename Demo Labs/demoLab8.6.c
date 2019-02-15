//Onawa Lanier
//14 Feb 2019
//Recursion

/*int fibonacci_number(int sequenceNumber);

    Purpose
        Define fibonacci_number() as a recursive function that returns a Fibonacci number of position "sequenceNumber"
        Allow the user to choose how many numbers are calculated
    Parameters
        Fibonacci Sequence number position to calculate
    Return Value
        sequenceNumber
        -1 if sequenceNumber is unrealistic
    The Fibonacci Sequence:
        Starts with 0 and 1 then each subsequent number is calculated by adding the two previous sequence numbers
        F(n) = F(n-1) + F(n-2)*/

void fibonacci_number(sequenceNumber); //declaration of function
    
int main()
{

    
    int userInput = 0;
 
    printf("Please enter the number of digits (between 1 and 10) you want to know of the Fibonacci Sequence:  ");
    scaf("%i", &userInput);

    //error handling
    if(userInput < 1 || userInput > 10)
    {
        printf("Please enter a value between 1 and 10");
    }
    else 
    {
        
    }
}
    