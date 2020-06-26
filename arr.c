#include <stdio.h>
int main()
{
  int test[1][3][3];
  int i,j,k;

  printf("Enter 9 values: \n");

  for ( i = 0; i < 1; ++i)
  {
    for ( j = 0; j < 3; ++j)
    {
      for ( k = 0; k <3 ; ++k)
      {
        scanf("%d", &test[i][j][k]);
      }
    }
  }

  // Printing values with proper index.

  printf("\nDisplaying values:\n");
  for ( i = 0; i < 1; ++i)
  {
    for ( j = 0; j < 3; ++j)
    {
      for ( k = 0; k < 3; ++k)
      {
        printf("elements[%d][%d][%d] = %d\n", i, j, k, test[i][j][k]);
      }
    }
  } 
for(i=0;i<1;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
      {
		printf("\n");
    	for(k=0;k<3;k++)
          {
		    printf("%d\t",test[i][j][k]);
		}
	}
 	printf("\n");
}
}
