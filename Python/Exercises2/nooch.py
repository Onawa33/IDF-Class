def calFat(fatGrams):
    return fatGrams *9
def calCarbs(carbGrams):
    return carbGrams *4
def main():
    fatGrams = int(input("Input number of fat grams consumed today: "))
    carbGrams = int(input("Input number of carb grams consumed today: "))

    print("Calories from fat: %d" %calFat(fatGrams))
    print("Calories from carbs: %d" %calCarbs(carbGrams))

main()
    
    
                        
