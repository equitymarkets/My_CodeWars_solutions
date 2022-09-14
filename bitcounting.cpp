/*
Write a function that takes an integer as input, and returns the number of 
bits that are equal to one in the binary representation of that number. 
You can guarantee that input is non-negative.
*/
#include <iostream>
#include <cmath>

unsigned int countBits(unsigned long long n){
   if(n == 1) return 1;
   int count = 0, index = ceil(log2(n));
   for(int i = 1; i <= index; i++)
   {
   int rem = n % 2;
   switch(rem)
      {
         case(0) : n = n/2; break;
         case(1) : { n = (n-1)/2; count = count + 1; } break;
      }
   if(n == 1) return count + 1;   
   std::cout << i << "   " << n << "   " << count << std::endl;
   }
   return count;
 }
