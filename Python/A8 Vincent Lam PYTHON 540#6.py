#--------------------------------------------------------
# Name:     Vincent Lam                                  
# Date:     July 27,2020                                 
# Problem:  Page 540, #6                                 
# Title:    Golf Scores
# Input:    Enter player and score
# Process:  Store in a file
# Output:   Display record
#--------------------------------------------------------

# call main to run
def main():
    # prompt below
    print("Enter below how many people played golf.")
    # asking how many times
    playerCount = int(input("How many people have played: "))
    golfFile = open ("golf.dat", 'w') # open file to write
    index = 0

    # while loop to cycle through
    while (index <= playerCount - 1):
        playerName = input("Enter player name: ")
        playerScore = input("Enter score here: ")
        golfFile.write(playerName + ":" + playerScore + "\n") # writing each time
        index = index + 1 # continuing the loop
    print("Info saved to golf.dat")
    golfFile.close # close off the file

    # open for reading
    golfFile = open("golf.dat", 'r') 
    numlist = (golfFile.readlines()) # run through the file
    index = 0

    # loop to run and print
    while index in range(playerCount):
        print("Player ", index + 1, "=", numlist[index], end = " ")
        index = index + 1
    golfFile.close()

# calling main
main()