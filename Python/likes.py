"""

You probably know the "like" system from Facebook and other pages. People can "like" blog posts, 
pictures or other items. We want to create the text that should be displayed next to such an item.

Implement the function which takes an array containing the names of people that like an item. 
It must return the display text as shown in the examples:

[]                                -->  "no one likes this"
["Peter"]                         -->  "Peter likes this"
["Jacob", "Alex"]                 -->  "Jacob and Alex like this"
["Max", "John", "Mark"]           -->  "Max, John and Mark like this"
["Alex", "Jacob", "Mark", "Max"]  -->  "Alex, Jacob and 2 others like this"

"""

def likes(names):
    length = len(names)
    output = ""
    if length == 0:
        output = "no one likes this"
    elif length == 1:
        output = names[0] + " likes this"
    elif length == 2:
        output = names[0] + " and " + names[1] + " like this"
    elif length == 3:
        for i in range(length):
            if i == 0:
                output += names[i] + ", "
            elif i == (1):
                output += names[i] + " and "
            else:
                output += names[i] + " like this"
    else:
      for i in range(length):
         if i == 0:
            output += names[i] + ", "
         else:
            output += names[i] + " and " + str(length-2) + " others like this"
            break
    return output
