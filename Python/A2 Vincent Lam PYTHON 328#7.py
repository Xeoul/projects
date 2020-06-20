print("#--------------------------------------------------------")
print("# Name:     Vincent Lam                                  ")
print("# Date:     June 18,2020                                 ")
print("# Problem:  Page 328, #7                                 ")
print("# Title:    Test Average and Grade                       ")
print("# Input:    Enter five tests scores                      ")
print("# Process:  Calculate the average                        ")
print("# Output:   Display a letter grade and the average       ")
print("#--------------------------------------------------------")

#                       Assignment
#   Design and code a program that asks the user to enter
#   five test scores.  The program should display a letter grade
#   for each score and the average test score.

# Declared variable for function
score = 0

# Function to determine grade
def determineGrade(score):
    iscore = int(score) # Convert string to int
    grade = "" # blank for default
    if iscore >= 90:
        grade = "A"
    elif iscore >= 80: # standard set for test grade
        grade = "B"
    elif iscore >= 70:
        grade = "C"
    elif iscore >= 60:
        grade = "D"
    else:
        grade = "F"
    return grade

# Enter test scores
test1 = float(input('Enter first test score: ')) #user input grabs test score typed
score = test1
determineGrade(score)
print('First test score is: ', test1, determineGrade(score))
print('') # spacing provided for better viewing

test2 = float(input('Enter second test score: ')) # score = test grabs it and puts in variable
score = test2
determineGrade(score)
print('Second test score is: ', test2, determineGrade(score))
print('')

test3 = float(input('Enter third test score: ')) # call determine function with score parameter
score = test3
determineGrade(score)
print('Third test score is: ', test3, determineGrade(score))
print('')

test4 = float(input('Enter fourth test score: ')) # print the statements with the following inside
score = test4
determineGrade(score)
print('Fourth test score is: ', test4, determineGrade(score))
print('')

test5 = float(input('Enter fifth test score: ')) #laid out so each area has its own spot
score = test5
determineGrade(score)
print('Fifth test score is: ', test5, determineGrade(score))
print('')

totalScores = test1 + test2 + test3 + test4 + test5 # Adding all the scores together for average

# Function for calculating the average of the test scores
def calcAverage(totalScores):
    numOfTests = 5
    average = totalScores / numOfTests
    score = average
    print ('The average grade is:', format(average, '.2f') + '%', determineGrade(score))

calcAverage(totalScores) # calling to print