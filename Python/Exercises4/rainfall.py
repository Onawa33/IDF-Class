def main():
    numMonths = 12
    numList = []
    total = 0
    name_Months = ['Jan', 'Feb', 'Mar', 'Apr', 'May', 'Jun', "Jul', 'Aug', 'Sep', 'Oct', 'Nov', 'Dec']
                   

    for i in range(numMonths):
            rainfall = int(input("Enter the rainfall amounts in inches for all 12 months, beginning with January: "))
            numList.append(rainfall)
            total += rainfall
            i += 1

    average = total / numMonths

    print(numList)
    print("The total rainfall for the year is: ", total)
    print("The average is: %.2f" %average)
    print("The month with highest rainfall
main()
        
