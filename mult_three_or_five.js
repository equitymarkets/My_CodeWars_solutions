/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
The sum of these multiples is 23.

Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in. 
Additionally, if the number is negative, return 0 (for languages that do have them).

Note: If the number is a multiple of both 3 and 5, only count it once.
*/

function solution(number){
  if(number < 0) return 0;
  var five = (Math.floor((number-1)/5) * 5);
  var three = (Math.floor((number-1)/3) * 3);
  var three_add = 0;
  var five_add = 0;
  
  for(var i = three; i > 0; i -= 3)
    {
      if(i % 5 != 0) 
        {
        three_add = three_add + i;
        }
    }
  
  for(var j = five; j > 0; j -= 5)
    {
      five_add = five_add + j;
    }
  return three_add + five_add;
}
