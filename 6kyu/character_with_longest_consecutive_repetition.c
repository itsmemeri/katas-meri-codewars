/*DESCRIPTION:
For a given string s find the character c (or C) with longest consecutive repetition and return:

c
(assign l to pointer)
where l (or L) is the length of the repetition. If there are two or more characters with the same l return the first in order of appearance.

For empty string return:

'\0'
(assign 0 to pointer)
Happy coding! :)*/


//  return the character with longest consecutive repetition
//  if the string is empty, return a null terminator: '\0'
//  assign the count of repetitions to the provided pointer *n

#include <string.h>
#include <stddef.h>

char    longest_repetition (char *s, size_t *n)
{
    unsigned int    curr_count = 1;
    unsigned int    max_count = 0;
    unsigned int    i = 0;
    char            curr_char = s[i];
    char            rep_char = '\0';

    while (s[i])
    {
		// set initial counter every time it changes characters
		if (s[i] == s[i + 1] && s[i + 1])
        {
            curr_count = 2;
            curr_char = s[i];
            i++;
        }
        // add to the current counter
        while (s[i] == s[i + 1] && s[i + 1])
        {
            curr_count++;
            curr_char = s[i];
            i++;
        }
        // set max count and max char position to the new value
        if (max_count < curr_count)
        {
            max_count = curr_count;
            rep_char = curr_char;
        }
        i++;
    }
    *n = max_count;
    return (rep_char);
}
aaabbcccc