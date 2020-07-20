print("#--------------------------------------------------------")
print("# Name:     Vincent Lam                                  ")
print("# Date:     July 13,2020                                 ")
print("# Problem:  Page 414, #4                                 ")
print("# Title:    Number Analysis Program                      ")
print("# Input:    Enter 20 numbers                             ")
print("# Process:  Store number in array and calculate          ")
print("# Output:   Display low, high, total, and average        ")
print("#--------------------------------------------------------")

def main():
    # initialized variables
    SIZE = 20
    index = 0
    int = []
    num = 0

    # ask user to enter numbers
    print('Enter 20 numbers to put in the array')
    while (index <= SIZE - 1):
        num = float(input("Enter a number: "))
        int.append(num)
        index = index + 1
    
    # assigning element 0 as lowest to compare
    lowest = int[0]
    index = 1
    while (index <= SIZE - 1): # nested loop
        while (int[index] < lowest):
            lowest = int[index]
        index = index + 1
    
    # reassigning element 0 as highest to compare 
    highest = int[0]
    index = 1
    while (index <= SIZE - 1):
        while (int[index] > highest):
            highest = int[index]
        index = index + 1
    
    # accumulator to hold total value
    total = 0
    index = 0
    while (index <= SIZE - 1):
        total = total + int[index]
        index = index + 1
    
    # calculate the average
    average = total / SIZE

    # display the amounts for each one
    print('The lowest number in the array is,', lowest)
    print('The highest number in the array is,', highest)
    print('The total of the numbers are,', total)
    print('The average of the numbers are,', average)

# calling main to run program
main()