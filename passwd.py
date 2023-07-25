#!/usr/bin/python
# This script is used to generate a password depending on the selected level of security

import random
import string

# Get the parameter(length and chars) from the user
def getParams() -> tuple[int, str]:
    print ("Please select the level of security you would like :")
    print ("1. Simple (length = [8 chars] letters)")
    print ("2. Standard (length = [10 chars] letters and numbers)")
    print ("3. Fort Knox🔒 (length = [15 chars] letters, numbers and symbols)\n")

    selection = input("Please enter your selection: ")
    
    if selection == "1":
        length = 8
        chars = string.ascii_letters
        print ("You have selected Simple")
    elif selection == "2":
        length = 10
        chars = string.ascii_letters + string.digits
        print ("You have selected Standard")
    elif selection == "3":
        length = 15
        chars = string.ascii_letters + string.digits + string.punctuation
        print ("You have selected Fort Knox")
    else:
        print ("Invalid selection, please try again")
        return getParams()
    
    return length, chars

def generatePassword(length: int, chars: str) -> str:
    password = ""
    for _ in range(length):
        password += random.choice(chars)
    return password

def main():
    print ("*** Welcome to the PuppyKiwi Password Generator ***")
    print ("This script will generate a password based on your selected level of security")
    print ("Your password is: " + generatePassword(*getParams()))
    print ("Stay safe")

if __name__ == "__main__":
    main()
