minutes = int(input("Enter the numner of minutes to convert to years and days: "))
MIN = minutes
days = 0
years = 0
while(minutes >= 1440): #while minutes are larger than a days worth
    minutes -= 1440     #subtract a days worth
    days += 1           #add one to day variable
while(days >= 365):
    days -= 365
    years += 1
print("%d minutes is %d years, %d days, and %d minutes" %(MIN, years, days, minutes))
