#--------------------------------------------------------
# Name:     Vincent Lam                                  
# Date:     July 14,2020                                 
# Problem:  Page 414, #7                                 
# Title:    Phone Number Lookup                          
# Input:    Enter a person's name                        
# Process:  Search for person in array                   
# Output:   Display person's name and phone number       
#--------------------------------------------------------

def main():
    # constant and arrays
    SIZE = 7
    people = ["bob", "john", "amy", "jose", "kai", "joe", "leia"]
    phoneNumbers = ['121', '122', '123', '124', '125', '126', '127']

    # asking user to input name
    print('Here are your friends:')
    print("bob, john, amy, jose, kai, joe, leia\nWho would you like to call?")
    nameInput = input("Enter a person's name: ")

    # find the name and phone number
    found = False
    index = 0
    while (found == False and index <= SIZE - 1):
        if (people[index] == nameInput.lower()):
            found = True
        else:
            index = index + 1
    if found: # using index to find the place and display
        print("The person's name and phone number is:", people[index], phoneNumbers[index])
    else:
        print('No user found')

# call main to run    
main()    