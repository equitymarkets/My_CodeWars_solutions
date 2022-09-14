/*
Digital root is the recursive sum of all the digits in a number.

Given n, take the sum of the digits of n. If that value has more than one digit, 
continue reducing in this way until a single-digit number is produced. 
The input will be a non-negative integer.
*/

#include <iostream>
#include <vector>

int digital_root(int n)
   {
      std::vector<int> digits;
      while (n)
         {
            digits.push_back(n % 10);
            n /= 10;
         }
      int count = 0;
      for(int i = 0; i < size(digits); i++) 
         {
            
            count = count + digits[i];
         }
   if((10 - count) <= 0) return digital_root(count);
   return count;   
   }
