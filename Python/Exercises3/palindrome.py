def isPalindrome(number):
    return number == reverse(number)

def reverse(number):

        return int(str(number)[::-1]) #converts input to string, reverses it, and converts it to an int

def main():
    number = eval(input("Enter a positive integer: "))

    if isPalindrome(number):
        print(number, "is palindrome")
    else :
        print(number, "is not palindrome")

main()


        
