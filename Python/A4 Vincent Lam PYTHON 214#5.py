print("#--------------------------------------------------------")
print("# Name:     Vincent Lam                                  ")
print("# Date:     June 29,2020                                 ")
print("# Problem:  Page 214, #5                                 ")
print("# Title:    Color Mixer                                  ")
print("# Input:    Enter two colors to mix                      ")
print("# Process:  If else statements to mix colors             ")
print("# Output:   Display secondary color                      ")
print("#--------------------------------------------------------")

# main to run
def main():
    colorOne = input("Enter primary color 1: ")
    colorTwo = input("Enter primary color 2: ")
    colorMix(colorOne, colorTwo) # calling the function

# using color inputs to find out either or
def colorMix(colorOne, colorTwo):
    red = "red" # calling the variables
    blue = "blue"
    yellow = "yellow"
    if colorOne == red and colorTwo == blue: # using if, elif, and to 
        print('The secondary color is purple.') # find and combine colors
    elif colorOne == red and colorTwo == yellow:
        print('The secondary color is orange.') # can use the or operator
    elif colorOne == blue and colorTwo == yellow: # for vice versa i.e. yellow and blue
        print('The secondary color is green.')
    else:
        print('Error: No primary colors.')
    
# calling it
main()