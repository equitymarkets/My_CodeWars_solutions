/*
Given an array of integers, find the one that appears an odd number of times.
There will always be only one integer that appears an odd number of times.
*/
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

int findOdd(const std::vector<int>& numbers)
{
   if(size(numbers) == 1) return numbers[0];
   std::vector<int> numbers_sort;
   for(int i = 0; i < size(numbers); i++)
      {
        numbers_sort.push_back(numbers[i]);
      }
   sort(numbers_sort.begin(), numbers_sort.end());
   for(int i = 0; i < size(numbers_sort); i++)
      {
         std::vector<int> oddEvenArray;
         oddEvenArray.push_back(numbers_sort[i]);
         for(int j = i + 1; j < (size(numbers_sort)); j++)
            {
               if(numbers_sort[i] == numbers_sort[j])
                  {
                     oddEvenArray.push_back(numbers_sort[j]);
                     i++;
                  }
            }
         if(size(oddEvenArray) % 2 == 1) return oddEvenArray[0];
         oddEvenArray.clear();
      }
return 0;
}
