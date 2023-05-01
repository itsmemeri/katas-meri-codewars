/*INTRODUCTION:
Welcome Adventurer. 
Your aim is to navigate the maze and reach the finish point without touching any walls. 
Doing so will kill you instantly!

DESCRIPTION:
You will be given a 2D array of the maze and an array of directions. 
Your task is to follow the directions given. 
If you reach the end point before all your moves have gone, you should return Finish. 
If you hit any walls or go outside the maze border, you should return Dead. 
If you find yourself still in the maze after using all the moves, you should return Lost.

The Maze array will look like:

maze = [[1,1,1,1,1,1,1],
        [1,0,0,0,0,0,3],
        [1,0,1,0,1,0,1],
        [0,0,1,0,0,0,1],
        [1,0,1,0,1,0,1],
        [1,0,0,0,0,0,1],
        [1,2,1,0,1,0,1]]

... with the following key
      0 = Safe place to walk
      1 = Wall
      2 = Start Point
      3 = Finish Point

directions = "NNNNNEEEEE" == "Finish" // (directions passed as a string)

RULES:
1. The Maze array will always be square i.e. N x N but its size 
and content will alter from test to test.

2. The start and finish positions will change for the final tests.

3. The directions array will always be in upper case and will be in the format
 of N = North, E = East, W = West and S = South.

4. If you reach the end point before all your moves have gone, you should return Finish.

5. If you hit any walls or go outside the maze border, you should return Dead.

6. If you find yourself still in the maze after using all the moves, you should return Lost. */


//DOESN'T PASS ALL TESTS

#include <stddef.h>

int find_pos (const int *maze, size_t n)
{
    size_t i = 0;
    while (i < n * n)
    {
        if (maze[i] == 2)
            return i;
        i++;
    }
}

char *maze_runner(const int *maze, size_t n, const char *directions) {
    
    int pos = find_pos(maze, n);
    size_t i = 0;
  
    while (directions[i])
    {
        switch (directions[i])
        {
          case 'N':
            pos -= n;
          break;
          case 'S':
            pos += n;
          break;
          case 'W':
            pos -= 1;
          break;
          case 'E':
            pos += 1;
          break;
        }
        i++;
        if (maze[pos] == 3)
            return ("Finish");
        if  (maze[pos] == 1 
            || (pos < 0 || pos > (n * n) - 1)
            || (pos % n == 0 && directions [i - 1] == 'E') 
            || (pos % n == n - 1 && directions [i - 1] == 'W'))
            return ("Dead");
    }
    return ("Lost");
}