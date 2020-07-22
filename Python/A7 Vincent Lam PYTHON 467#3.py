#--------------------------------------------------------
# Name:     Vincent Lam                                  
# Date:     July 21,2020                                 
# Problem:  Page 467, #3                                 
# Title:    Rainfall Program Modification
# Input:    Enter rainfall for the year
# Process:  Calculate and process total and average
# Output:   Display total, average, high, low, and values
#--------------------------------------------------------

# main
def main():
    print("Enter the rainfall for the year.") # prompt
    rain = [] # empty list awaiting user input
    MONTH = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"]
    SIZE = 12 # number of months 
    getRain(rain,SIZE)
    print("==============================================")
    lowest = findLow(rain, SIZE, MONTH)
    highest = findHigh(rain, SIZE, MONTH)
    print("==============================================")
    total = getTotal(rain, SIZE)
    bubbleSort(rain, SIZE)
    displayValues(total, SIZE, highest, lowest, rain)
    
# asking the user for input
def getRain(rain, SIZE):
    index = 0
    while (index <= SIZE - 1):
        print('Enter rainfall for month', index + 1)
        rainInput = int(input('Enter rainfall: '))
        rain.append(rainInput)
        index = index + 1

# adding the total
def getTotal(rain, SIZE):
    index = 0
    total = 0
    while(index <= SIZE - 1):
        total = total + rain[index]
        index = index + 1
    return total

# finding the low and setting month with it
def findLow(rain, SIZE, MONTH):
    lowest = 0
    index = 1
    while (index <= SIZE - 1):
        if (rain[index] < rain[lowest]):
            lowest = index
        else:
            index = index + 1
    print("The lowest rainfall month is:", MONTH[lowest])
    return rain[lowest]

# finding the high and setting month with it
def findHigh(rain, SIZE, MONTH):
    highest = 0
    index = 1
    while (index <= SIZE - 1):
        if (rain[index] > rain[highest]):
            highest = index
        else:
            index = index + 1
    print("The highest rainfall month is:", MONTH[highest])
    return rain[highest]

# sorting the array by ascending
def bubbleSort(rain, SIZE):
    maxElement = SIZE - 1
    while (maxElement >= 1):
        index = 0
        while (index <= maxElement - 1):
            if (rain[index] > rain[index + 1]):
                rain[index], rain[index + 1] = rain[index + 1], rain[index]
            else:
                index = index + 1
        maxElement = maxElement - 1
    return rain

# display the values
def displayValues(total, SIZE, highest, lowest, rain):
    average = total / SIZE
    print("--------------------------------")
    print("The total rainfall is:", total)
    print("The average rainfall is:", average)
    print("The highest value is:", highest)
    print("The lowest value is:", lowest)
    print("The sorted order is:", rain)

# call main to run
main()