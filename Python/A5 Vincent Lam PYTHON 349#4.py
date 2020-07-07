print("#--------------------------------------------------------")
print("# Name:     Vincent Lam                                  ")
print("# Date:     July 7,2020                                  ")
print("# Problem:  Page 349, #4                                 ")
print("# Title:    Speeding Violation Calculator                ")
print("# Input:    Enter speed limit and driver speed           ")
print("# Process:  Validate and calculate the mph over limit    ")
print("# Output:   Display mph over limit                       ")
print("#--------------------------------------------------------")

# main to run
def main():
    # initialized variables
    speedLimit = 0
    driverSpeed = 0

    # prompt
    print('The current speed limit cannot be <20, or >70')
    
    speedLimit = getLimit() # setting getLimit to speedLimit variable
    while (speedLimit <= 19 or speedLimit >= 71): # changed by one value to fit 20 and 70
        print('Error: enter the correct speed limit.')
        speedLimit = int(input('Enter the correct limit here: '))
    
    # while loops to determine and repeat upon bad input

    driverSpeed = getSpeed() # assigning to driverSpeed
    while (driverSpeed < speedLimit):
        print("You're not going over the limit.")
        print('Re-enter the speed below.')
        driverSpeed = int(input('Enter new speed here: '))
    print('You went over the speed limit by ', driverSpeed - speedLimit)

# grabbing the speed limit from user
def getLimit():
    speedLimit = int(input('Enter the posted speed limit: '))
    return speedLimit

# getting mph the driver was going
def getSpeed():
    driverSpeed = int(input('What was your speed? '))
    return driverSpeed

# calling main
main()