print("#--------------------------------------------------------")
print("# Name:     Vincent Lam                                  ")
print("# Date:     June 16,2020                                 ")
print("# Problem:  Page 98, #4                                  ")
print("# Title:    Tip, Tax, and Total                          ")
print("# Input:    Enter charge of the food                     ")
print("# Process:  Process the amount with the tip and sales tax")
print("# Output:   Output the amounts and the total price       ")
print("#--------------------------------------------------------")

#                   Assignment
#   Design and code a program that calculates 
#   the total amount of a meal purchased at a restaurant
#   and to display each of the amounts with the total

# Declared variables
tipPercent = 0.15
s_tax = 0.07

# Asking the user how much the food cost
foodPrice = float(input('Enter the price of the food: $'))
print('The price of the food is: $', format(foodPrice, '.2f'))

# calculating tip
tip = foodPrice * tipPercent 
print('The 15% tip would be: $', format(tip, '.2f'))

# calculating sales tax
salesTax = foodPrice * s_tax 
print('The 7% Sales tax would be: $', format(salesTax, '.2f'))

# calculating total
total = foodPrice + tip + salesTax
print('The grand total is: $', format(total, '.2f'))
# Using format to make pricing look organized and tidy on receipt