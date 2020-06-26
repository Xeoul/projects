print("#--------------------------------------------------------")
print("# Name:     Vincent Lam                                  ")
print("# Date:     June 24,2020                                 ")
print("# Problem:  Page 154, #10                                ")
print("# Title:    Monthly Sales Tax                            ")
print("# Input:    Enter the total sales                        ")
print("# Process:  Calculate the county, sales, and total tax   ")
print("# Output:   Display county, sales, and total tax         ")
print("#--------------------------------------------------------")

# Main to grab input from user
def main():
    keyboardInput = float(input('Enter the total sales for the month: $'))
    countyTax, stateTax, totalTax = calculate(keyboardInput) # label parameters under function
    display(countyTax, stateTax, totalTax)

# Calculating the values for the county, state, and total
def calculate(keyboardInput):
    COUNTY_RATE = 0.02 # named constant
    STATE_RATE = 0.04
    countyTax = keyboardInput * COUNTY_RATE
    stateTax = keyboardInput * STATE_RATE
    totalTax = countyTax + stateTax
    return countyTax, stateTax, totalTax

# Displaying the calculated values
def display(countyTax, stateTax, totalTax):
    print('The County sales Tax is: $', format(countyTax, '.2f'))
    print('The State sales Tax is: $', format(stateTax, '.2f'))
    print('The total sales tax is: $', format(totalTax, '.2f'))

# Calling main
main()