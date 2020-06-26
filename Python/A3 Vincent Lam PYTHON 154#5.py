print("#--------------------------------------------------------")
print("# Name:     Vincent Lam                                  ")
print("# Date:     June 23,2020                                 ")
print("# Problem:  Page 154, #5                                 ")
print("# Title:    Property Tax                                 ")
print("# Input:    Enter the price of the land                  ")
print("# Process:  Calculate the assessment value and tax       ")
print("# Output:   Find the real value and display value and tax")
print("#--------------------------------------------------------")


# Main to run
def main():
    keyboardInput = float(input('Enter the price of the land: $')) # grab user input 
    assessmentValue, realTax = calculate(keyboardInput) # assign variables to function
    display(assessmentValue, realTax)  # display the values

# Calculate the assessment value and property tax.
def calculate(keyboardInput):
    assessmentValue = keyboardInput * 0.60     # 60% for property actual value
    realTax = (assessmentValue * .64) / 100    # calculate the tax
    return assessmentValue, realTax
    
# Display the prices
def display(assessmentValue, realTax):
    print('The assessment value is : $', format(assessmentValue, '.2f'))
    print('The property tax is: $', format(realTax, '.2f'))
    # ^ display the values

# Call the main to run
main()