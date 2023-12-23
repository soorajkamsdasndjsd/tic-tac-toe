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
    printf("__________________________\n\n");
    printf("\tTIC TAC TOE\n");
    printf("__________________________\n");
 displaymatrix(s);
  while (p == 0)
    {
    if(m%2==0)
        printf("Turn of x\n");
    else
        printf("Turn of o\n");

      printf ("enter the row: ");
      scanf ("%d", &r);
      printf ("enter the coloumn: ");
      scanf ("%d", &c);
      if(r>=0&&r<3&&c>=0&&c<3)
      {
      if (s[r][c].ch == '_')
	{
	  if (m % 2 == 0)
	    {
	        
	      s[r][c].ch = 'x';

	    }
	  else
	    {
	      s[r][c].ch = 'o';
	    }

	}
    