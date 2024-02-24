// Store number in array and find sum of array

#include<stdio.h>
void main()
{
    int a[10],i,n;
    int s = 0;
    printf("entr the limit if array:-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      s=s+a[i];
    }
    printf("%d",s);
}