/*
A format for expressing an ordered list of integers is to use a comma separated list of either

-individual integers

-or a range of integers denoted by the starting integer separated from the end integer in the range 
by a dash, '-'. The range includes all integers in the interval including both endpoints. It is not 
considered a range unless it spans at least 3 numbers. For example "12,13,15-17"

Complete the solution so that it takes a list of integers in increasing order and returns a correctly formatted string in the range format.
*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

std::string range_extraction(std::vector<int> args) 
  {
    std::stringstream output;

    int length = args.size();
    for(int i = 0; i < length; i++)
      {
        if(i == 0 && args[i] != args[i+1]-1)
          {
            if(i != length-1)
              {
                output << args[i] << ",";
                continue;
              }
            output << args[i];
          }
        if(args[i] == args[i+1]-1 && args[i+1] != args[i+2]-1)
          {
            if(i != length-1)
              {
                output << args[i] << ",";
                continue;
              }
            output << args[i];
          }
        if(args[i] != args[i+1]-1)
          {
            if(i != length-1)
              {
                output << args[i] << ",";
                continue;
              }
            output << args[i];
          }
        if(args[i] == args[i+1]-1 && args[i+1] == args[i+2]-1)
          {
            output << args[i] << "-";
            for(int j = i+1; j < length; j++)
              {
                if(args[j] != args[j+1]-1 || j == length-1) 
                  { 
                    if(j != length-1)
                      {
                        output << args[j] << ","; 
                        i = j;
                        break;
                      }
                    output << args[j];
                    return output.str();
                  }
              }
          }
      }
    std::cout << output.str() << std::endl;
    return output.str();
  } 
