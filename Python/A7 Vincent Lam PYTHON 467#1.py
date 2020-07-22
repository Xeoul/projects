#--------------------------------------------------------
# Name:     Vincent Lam                                  
# Date:     July 20,2020                                 
# Problem:  Page 467, #1                                 
# Title:    Sorted Golf Scores                          
# Input:    Enter 10 golf scores                        
# Process:  Sort the scores ascending order                   
# Output:   Display array's organized layout       
#--------------------------------------------------------

# the main
def main():
    # calling list and variables
    golfScores = []
    index = 0
    SCORES = 10

    # asking user the prompt
    print('Enter 10 golf scores below.')

    # enter scores 10 times
    while (index <= SCORES - 1):
        scoreInput = int(input('Enter score: '))
        golfScores.append(scoreInput)
        index = index + 1
    
    # calling module to sort with 2 parameters passed
    bubbleSort(golfScores, SCORES)

    # print the final result
    print('The sorted order is:', golfScores)

# going through the array to sort
def bubbleSort(golfScores, SCORES):
    maxElement = SCORES - 1
    while (maxElement >= 1):
        index = 0
        while (index <= maxElement - 1):
            if (golfScores[index] > golfScores[index + 1]):
                golfScores[index], golfScores[index + 1] = golfScores[index + 1], golfScores[index]
            index = index + 1 
        maxElement = maxElement - 1
    return golfScores

# call the main to run
main()