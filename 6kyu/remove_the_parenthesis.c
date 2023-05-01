/*DESCRIPTION:
In this kata you are given a string for example:
"example(unwanted thing)example"

Your task is to remove everything inside the parentheses as well as the parentheses themselves.

The example above would return:
"exampleexample"

Notes:
- Other than parentheses only letters and spaces can occur in the string. Don't worry about other brackets like `"[]"` and `"{}"` as these will never appear.
- There can be multiple parentheses.
- The parentheses can be nested.*/


// do not allocate memory for return value
// assign to the provided pointer *str_out

void remove_parentheses(const char *str_in, char *str_out) 
{
  int i = 0;
  int j = 0;
  int par = 0;
  
  while(str_in[i])
  {
    if (str_in[i] == '(') {par++;}
    if (str_in[i] == ')') {par--;}
    if (par == 0 && str_in[i] != ')')
    {
      str_out[j] = str_in[i];
      j++;
    }
    i++;
  }
  str_out[j] = 0;
}