weight = float(input("Enter weight in pounds: "))
height = float(input("Enter height in inches: "))
kg = weight * .45359237
meters = height * .0254
BMI = kg / (meters**2)
print("Your BMI is: %.2f" %(BMI))
