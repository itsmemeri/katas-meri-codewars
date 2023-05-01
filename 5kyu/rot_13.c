/*DESCRIPTION:
How can you tell an extrovert from an introvert at NSA?
Va gur ryringbef, gur rkgebireg ybbxf ng gur BGURE thl'f fubrf.

I found this joke on USENET, but the punchline is scrambled. 
Maybe you can decipher it?According to Wikipedia, **[ROT13](http://en.wikipedia.org/wiki/ROT13)** is frequently used to obfuscate jokes on USENET.

For this task you're only supposed to substitute characters. 
Not spaces, punctuation, numbers, etc.

Test examples:
"EBG13 rknzcyr." -> "ROT13 example."

"This is my first ROT13 excercise!" -> "Guvf vf zl svefg EBG13 rkprepvfr!" */


char *rot13 (char *str_out, const char *str_in)
{
  int i = 0;
  while (str_in[i])
  {
    if ((str_in[i] >= 'a' && str_in[i] <= 'm') || (str_in[i] >= 'A' && str_in[i] <= 'M'))
        str_out[i] = str_in[i] + 13;
    else if ((str_in[i] >= 'n' && str_in[i] <= 'z') || (str_in[i] >= 'N' && str_in[i] <= 'Z'))
        str_out[i] = str_in[i] - 13;
    else
        str_out[i] = str_in[i];
    i++;
  }
  str_out[i] = '\0';
  return str_out;
}