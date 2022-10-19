/*
An isogram is a word that has no repeating letters, 
consecutive or non-consecutive. Implement a function 
that determines whether a string that contains only 
letters is an isogram. Assume the empty string is an isogram. 
Ignore letter case.
*/

#include <iostream>
#include <cstring>

bool is_isogram(std::string str) 
   {
   int size = str.length();
   char arr[size];
   int i,j;
   strcpy(arr,str.c_str());
   for(i = 0; i < size; i++)              //Remember to convert to lower case
      {
         arr[i] = tolower(arr[i]);
      }
   for(i = 0; i < size; i++)
      {
         if(i > 0)
         {
            for(j = i - 1; j >= 0; j--)
               {
               if(arr[i] == arr[j]) return false;
               }
         }
      }
   return true;
}
