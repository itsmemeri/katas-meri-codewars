/*DESCRIPTION:
### **Build Tower**

Build a pyramid-shaped tower, as an array/list of strings, given a positive integer `number of floors`. A tower block is represented with `"*"` character.

For example, a tower with `3` floors looks like this:
[
  "  *  ",
  " *** ",
  "*****"
]

And a tower with 6 floors looks like this:
[
  "     *     ",
  "    ***    ",
  "   *****   ",
  "  *******  ",
  " ********* ",
  "***********"
]*/


void build_tower(unsigned n, char tower[n][2 * n - 1])
{  
  for (unsigned x = 0; x < n; x++)
  {
    for (unsigned y = 0; y < 2 * n - 1; y++)
    {
      tower[x][y] = ' ';
    }
    for (unsigned y = n - 1 - x; y <= n - 1 + x; y++)
    {
      tower[x][y] = '*';
    }
  }
}