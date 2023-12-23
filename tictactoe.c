#include<stdio.h>
struct tic
{
  char ch;
};
void displaymatrix(struct tic s[3][3])
{
    for (int i = 0; i < 3; i++)
    {
      for (int n = 0; n < 3; n++)
	{
	  printf ("%c\t", s[i][n].ch);
	}
      printf ("\n");
    }
}
void main ()
{
  int i, n, p = 0, r, c, j, l = 0, m = 0,g=0;
  struct tic s[3][3];
  for (i = 0; i < 3; i++)
    {
      for (n = 0; n < 3; n++)
	{
	  s[i][n].ch = '_';

	}
    }
