#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int jumps(int);

int count = 0;
int final_n = 0;

int jumps(int given_n)
{
  final_n = final_n + pow(2,count);
  if(final_n >= given_n)
    return final_n;
  count++;
  jumps(given_n);
}

int main()
{
  int given_n;
  int final_nn;
  int c = 0;

  printf("Write the position at which Chintu is sleeping\n");
  fflush(stdin);
  scanf("%d",&given_n);
  final_nn = jumps(given_n);
  if(final_nn == given_n)
  {
    printf("\nYes\n");
    printf("%d\n",count+1);
  }
  else
  {
      printf("\nNo\n");
      return 0;
  }
  while(c != count+1)
    {
        printf("%d ",c);
        c++;
    }
}
