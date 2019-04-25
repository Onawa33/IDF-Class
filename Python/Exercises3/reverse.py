#program displays an integer reversed
def reverse(number):
    return int(str(number)[::-1])

def main():
    number = int(input("Enter a positive integer: "))
    print(reverse(number))
    
main()
