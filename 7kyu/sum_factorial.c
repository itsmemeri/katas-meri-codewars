/*DESCRIPTION:
Factorials are often used in probability and are used as an introductory problem for looping constructs. In this kata you will be summing together multiple factorials.

Here are a few examples of factorials:

4 Factorial = 4! = 4 * 3 * 2 * 1 = 24

6 Factorial = 6! = 6 * 5 * 4 * 3 * 2 * 1 = 720

In this kata you will be given a list of values that you must first find the factorial, and then return their sum.

For example if you are passed the list `[4, 6]` the equivalent mathematical expression would be `4! + 6!` which would equal `744`.

Good Luck!

Note: Assume that all values in the list are positive integer values > 0 and each value in the list is unique.*/


//Function that returns the factorial of the number "i": recursive and iterative

//TERNARY AND RECURSIVE OPTION
#include <stddef.h>

unsigned long long factorial_func_recursive(int nb)
{
    unsigned long long rec_fact = 1;
    return ((nb > 0) ? (rec_fact * nb * factorial_func(nb - 1)): rec_fact);
}

//ITERATIVE OPTION FOR THE FACTORIAL FUNCTION
unsigned long long factorial_func_iterative(int i)
{
    unsigned long long it_fact = 1;
    
    while (i > 1)
    {
        it_fact *= i;
        i--;
    }
    return it_fact;
}

///////////////////////////////////////////////////////////////////////////////////////
unsigned long long sum_factorial(size_t z, const int array[z]) 
{
  unsigned long long  res = 0;
  for (size_t i = 0; i < z; i++)
  {
      res += factorial_func_recursive(array[i]);
	  //res += factorial_func_iterative(array[i]);
  }
  return res;
}