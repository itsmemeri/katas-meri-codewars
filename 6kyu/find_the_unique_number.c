/*DESCRIPTION:
There is an array with some numbers. All numbers are equal except for one. Try to find it!
finduniq((const float[]){1, 1, 1, 2, 1, 1}, 5);  --> 2 
finduniq((const float[]){0, 0, 0.55, 0, 0}, 5);  --> 0.55 

It’s guaranteed that array contains at least 3 numbers.

The tests contain some very huge arrays, so think about performance. */


#include <stddef.h>

float finduniq(const float *nums, size_t n)
{
    unsigned i = 0;
    
    while (i < n - 1)
    {
      if (nums[i] == nums[i + 1])
          i++;
      else if (nums[i] != nums[i + 1] && nums[i + 1] == nums[i + 2])
        return (nums[i]);
      else
        return (nums[i + 1]);
    }
    return (nums[i]);
}