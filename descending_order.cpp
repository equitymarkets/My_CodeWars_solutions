/*
Your task is to make a function that can take any non-negative integer as an argument and return it 
with its digits in descending order. Essentially, rearrange the digits to create the highest possible number.
*/
#include <iostream>
#include <vector>
#include <cinttypes>
#include <algorithm>

uint64_t descendingOrder(uint64_t a)
  {
  std::vector<uint64_t> array;
  while(a)
    {
      array.push_back(a % 10);
      a /= 10; 
    }
  sort(array.begin(), array.end());
  //for(int i = 0;)
  int length = size(array);
  unsigned long long mult = 10;
  a = 0; 
  for(int i = 0; i <= (length-1); i++)
    {
      if(i == 0) { a = array[i]; }
      else 
        { 
          a = a + (array[i] * mult); 
          mult = mult * 10;
        }
    }
    return a;
  }
