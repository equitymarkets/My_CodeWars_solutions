"""
ATM machines allow 4 or 6 digit PIN codes and PIN codes cannot contain anything but exactly 4 digits or exactly 6 digits.

If the function is passed a valid PIN string, return true, else return false.

Examples (Input --> Output)
"1234"   -->  true
"12345"  -->  false
"a234"   -->  false
"""
import re

def validate_pin(pin):
    num_validator = "^\\d+$"
    space_check = ' ' in pin
    return_check = '\n' in pin      #check for newlines not just spaces!
    length_str_pin = len(pin)
    if((length_str_pin == 4 or length_str_pin == 6) and (space_check == False) 
        and (return_check == False) and (re.match(num_validator, pin))): 
        return True
    else: 
        return False
