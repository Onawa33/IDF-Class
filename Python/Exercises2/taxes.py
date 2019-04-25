def stateTax(totalSales):
    state = totalSales * .04
    return state
def countyTax(totalSales):
    county = totalSales * .02
    return county
def totalTax(state, county):
    totalTax = state + county
    return totalTax

def main():

    
    totalSales = float(input("Input total sales: "))
    state = stateTax(totalSales)
    county = countyTax(totalSales)
    
    print("Total state tax: %.2f" %state)
    print("Total countyTax: %.2f" %county)
    print("Total tax: %.2f" %totalTax(state, county))

main()
