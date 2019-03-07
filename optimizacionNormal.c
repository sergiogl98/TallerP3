# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <time.h>


int main()
{
  int matriz[20000][100];
  
  for(int i=0; i< 20000; i++)
  {
    for(int j=0;j< 100; j++)
    {
      matriz[i][j]=0;
    }
  }

  long  result = clock();
  printf("Milisegundos: %ld\n",result);
  return 0;
}
