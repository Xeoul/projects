print("#--------------------------------------------------------")
print("# Name:     Vincent Lam                                  ")
print("# Date:     July 6,2020                                  ")
print("# Problem:  Page 279, #3                                 ")
print("# Title:    Budget Analysis                              ")
print("# Input:    Enter amount budgeted and expenses           ")
print("# Process:  Loop and calculate total                     ")
print("# Output:   Display amount if over or under budget       ")
print("#--------------------------------------------------------")

# main method
def main():
    # initialized variables
    budget = 0
    total = 0
    expense = 0

    # Grabbing the budget
    budget = grabBudget()

    # prime read to input
    expense = float(input('How much expense was there? '))
    print('Enter each expense below.')
    counter = 1
    while (counter <= expense): # accumulate the total
        cost = float(input('Enter the cost: $'))
        total = total + cost
        counter = counter + 1
    print('The total expense for the month is', total)

    # determine the budget is over or under
    if (total >= budget):
        print('You spent $', total - budget, 'over.')
    else:
        print('You spent $', total - budget, 'under.')

# grabbing the budget for the beginning
def grabBudget():
    budget = float(input('How much is your budget for this month? $'))
    return budget
    
# calling main to run
main()