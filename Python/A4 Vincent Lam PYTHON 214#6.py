print("#--------------------------------------------------------")
print("# Name:     Vincent Lam                                  ")
print("# Date:     June 30,2020                                 ")
print("# Problem:  Page 214, #6                                 ")
print("# Title:    Book Club Points                             ")
print("# Input:    Enter # of books purchased this month        ")
print("# Process:  Determine how many points the user gets      ")
print("# Output:   Display points = how many books bought       ")
print("#--------------------------------------------------------")

# main to ask for user input
def main():
    userInput = int(input('Enter how many books you purchased this month: '))
    numOfBooks(userInput) # calling function to pass and test statements

# determine the book to point ratio
def numOfBooks(userInput):
    if userInput == 0: # if and elif to seperate points
        print('You earned 0 points.')
    elif userInput == 1:
        print('You earned 5 points.')
    elif userInput == 2:
        print('You earned 15 points.')
    elif userInput == 3:
        print('You earned 30 points.')
    elif userInput >= 4:
        print('You earned 60 points.')

# calling main
main()