/*
Define a function that takes an integer argument and returns a logical value true or false depending on if the integer is a prime.
*/

#include <iostream>
#include <string.h>

bool isPrime(int num)   //Sieve of Eratosthenes was too slow
  {
    if(num < 2) return false;   //eliminate lower numbers to start higher
    if(num < 4) return true;    //and count by more
    if(num % 2 == 0 || num % 3 == 0) return false;
    for(int i = 5; (i*i) <= num; i += 6)
      {
        if(num % i == 0 || num % (i + 2) == 0) return false;
      }
    return true;
  }
