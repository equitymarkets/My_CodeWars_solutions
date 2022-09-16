/*
Implement the function unique_in_order which takes as argument a sequence and 
returns a list of items without any elements with the same value next to each other 
and preserving the original order of elements.
*/

#include <string>
#include <vector>
#include <iostream>

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable)
  {
    std::vector<T> result;
    int length = size(iterable), count = length-1;
    for(int i = 0; i <= count; i++)
      {
        if(i == count) 
          {
            result.push_back(iterable[i]); break;
          }
        if(iterable[i] != iterable[i+1]) result.push_back(iterable[i]);
      }
    return result;
  }

std::vector<char> uniqueInOrder(const std::string& iterable)
  {
    std::vector<char> result;
    int length = size(iterable), count = length-1;
    for(int i = 0; i <= count; i++)
      {
        if(i == count) 
          {
            result.push_back(iterable[i]); break;
          }
        if(iterable[i] != iterable[i+1]) result.push_back(iterable[i]);
      }
    return result;
  }
