/*
Greed is a dice game played with five six-sided dice. Your mission, should you choose to accept it, 
is to score a throw according to these rules. You will always be given an array with five six-sided dice values.

 Three 1's => 1000 points
 Three 6's =>  600 points
 Three 5's =>  500 points
 Three 4's =>  400 points
 Three 3's =>  300 points
 Three 2's =>  200 points
 One   1   =>  100 points
 One   5   =>   50 point

A single die can only be counted once in each roll. For example, a given "5" can only count as part of a triplet 
(contributing to the 500 points) or as a single 50 points, but not both in the same roll.
*/

#include <iostream>
#include <vector>

int score(const std::vector<int>& dice) {
  std::vector<int> one, two, three, four, five, six;
  int score = 0, length = dice.size(); 
  for(int i = 0; i < length; ++i)
    {
      switch(dice[i])
        {
          case(1) :  
            {
              one.push_back(1);
              score = score + 100;
              break;
            }
          case(2) : two.push_back(2); break;
          case(3) : three.push_back(3); break;
          case(4) : four.push_back(4); break;
          case(5) :  
            {
              five.push_back(5);
              score = score + 50;
              break;
            }
          case(6) : six.push_back(6); break;
        }
    }
  if(one.size() >= 3) score = score + 700;  
  if(two.size() >= 3) score = score + 200;
  if(three.size() >= 3) score = score + 300;
  if(four.size() >= 3) score = score + 400;
  if(five.size() >= 3) score = score + 350;
  if(six.size() >= 3) score = score + 600;
  return score;
}
