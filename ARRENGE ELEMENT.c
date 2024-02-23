# include <stdio.h>
int main()
{
    int n,i,a,x[10],t;
    printf("input value of n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        for(i=1;i<=n-1;i++)
        {
          for(a=0;a<n;a++);
          {
              if(x[a]>x[a+1])
              {
                  t=x[a];
                  x[a]=x[a+1];
                  x[a+1]=t;
              }
          }  
        }
        for(i=0;i<n;i++)
        {
            printf("%d",x[i]);

        }
    }
return 0;

}