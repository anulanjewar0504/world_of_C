# include <stdio.h>
int main()
{
    int n,i,j;
    printf("enter the number of columns");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("G");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
      for(j=1;j<=i;j++)
      {
          printf("G");     
      }
      printf("\n");     
    }
return 0;
}
