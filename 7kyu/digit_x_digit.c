/*DESCRIPTION:
Welcome. In this kata, you are asked to square every digit of a number and concatenate them.

For example, if we run 9119 through the function, 811181 will come out, because 92 is 81 and 12 is 1. (81-1-1-81)

Example #2: An input of 765 will/should return 493625 because 72 is 49, 62 is 36, and 52 is 25. (49-36-25)

Note: The function accepts an integer and returns an integer.

Happy Coding!*/

//returns the square of n
unsigned square (unsigned n)
{
    return (n * n);
}

unsigned long long square_digits (unsigned n)
{
		//returns 0 if the number given as an input is 0
    if (n == 0)
    {    
        return n;
    }
		// the if is to differentiate between one-digit or two-digit squares
    if (square (n % 10) < 10)
		{
				// returns de square of the now called units and the recursive function for (n / 10)
        return (square (n % 10) + (10 * square_digits (n / 10))); 
		}
		// returns de square of the now called units and the recursive function for (n / 10) when the square measures two digits
    return (square (n % 10) + (100 * square_digits (n / 10)));
}
