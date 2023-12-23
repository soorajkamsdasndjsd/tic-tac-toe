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
      else
	{
	  printf ("block already filled\n");
	  m--;
	}
      }
	else
	{
	    printf("you thought outside the box\n");
	    m--;
	}
	
    displaymatrix(s);
      for (i = 0; i < 3; i++)
	{
	  l = 0;
	  if (s[i][l].ch == 'x' && s[i][l + 1].ch == s[i][l + 2].ch
	      && s[i][l].ch == s[i][l + 1].ch)
	    {
	      p++;
	      printf ("the winner of game is x");
	      g++;
	    }
	}
      for (l = 0; l < 3; l++)
	{
	  i = 0;
	  if (s[i][l].ch == 'x' && s[i + 1][l].ch == s[i + 2][l].ch
	      && s[i][l].ch == s[i + 1][l].ch)
	    {
	      p++;
	      printf ("the winner of game is x");
	      g++;
	    }
	}  
	 if (s[0][0].ch == 'x' && s[1][1].ch == s[2][2].ch
	  && s[0][0].ch == s[1][1].ch)
	{
	  p++;
	  printf ("the winner of game is x");
	  g++;

	}
      if (s[0][3].ch == 'x' && s[1][1].ch == s[2][0].ch
	  && s[3][0].ch == s[1][1].ch)
	{
	  p++;
	  printf ("the winner of game is x");
	  g++;
	}

    

  for (i = 0; i < 3; i++)
    {
      l = 0;
      if (s[i][l].ch == 'o' && s[i][l + 1].ch == s[i][l + 2].ch
	  && s[i][l].ch == s[i][l + 1].ch)
	{
	  p++;
	  printf ("the winner of game is o");
	  g++;
	}
    }
	  for (l = 0; l < 3; l++)
    {
      i = 0;
      if (s[i][l].ch == 'o' && s[i + 1][l].ch == s[i + 2][l].ch
	  && s[i][l].ch == s[i + 1][l].ch)
	{
	  p++;
	  printf ("the winner of game is o");
	  g++;
	}
    }
  if (s[0][0].ch == 'o' && s[1][1].ch == s[2][2].ch
      && s[0][0].ch == s[1][1].ch)
    {
      p++;
      printf ("the winner of game is o");
      g++;

    }
  if (s[0][3].ch == 'o' && s[1][1].ch == s[2][0].ch
      && s[3][0].ch == s[1][1].ch)
    {
      p++;
      printf ("the winner of game is o");
      g++;
    }
