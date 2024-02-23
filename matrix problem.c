# include <stdio.h>
int main()
{
    int m1[50][50];
    int m2[50][50];
    int r1,c1;
    int r2,c2;
    int a,b,c,d;

    printf("Enter the size of row for matrix 1\n");
    scanf("%d",&r1);

    printf("enter the size of coloum for matrix 1\n");
    scanf("%d",&c1);

    printf("enter the %d element for matrix 1\n",r1*c1);

    for(a=0;a<r1;a++)
    {
        for(b=0;b<c1;b++)
        {
            printf("%d%d=",a+1,b+1);
            scanf("%d",&m1[a][b]);
        }

    }
    printf("matrix 1 is \n");
      for(a=0;a<r1;a++)
    {
        for(b=0;b<c1;b++)
        {
            printf("%d",m1[a][b]);
        }
        printf("\n");
    }
     printf("Enter the size of row for matrix 2\n");
    scanf("%d",&r2);

    printf("enter the size of coloum for matrix 1\n");
    scanf("%d",&c2);

    printf("enter the %d element for matrix 1\n",r2*c2);

    for(c=0;c<r2;c++)
    {
        for(d=0;d<c2;d++)
        {
            printf("%d%d=",c+1,d+1);
            scanf("%d",&m1[c][d]);
        }
    }    
    printf("matrix 2 is \n");
    for(c=0;c<r2;c++)
    {
      for(d=0;d<c2;d++)
      {
          printf("%d",m2[c][d]);
      }
       printf("\n");

    }
    return 0;
    }    
