# include <stdio.h>
int main()
{
    int a;
    int b;
    int add;
    int sub;
    int mul; 
    int div;
    int mod;
    int ans;

    printf("enter two value\n");
    scanf("%d%d",&a,&b);
    printf("press 1 for addition\n");
    printf("press 2 for substraction\n");
    printf("press 3 for multiplaction\n");
    printf("press 4 for division\n");
    printf("press 5 for mod\n");
    

    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;

    printf("press the number for your operation\n",ans);
    scanf("%d",&ans);
  switch (ans)
    {
        case 1:
         printf("addition is %d",add);
         break;

        case 2:
         printf("substraction is %d",sub);
         break;
        case 3:
         printf("multiplacation is %d",mul);
         break;
        case 4:
         printf("division is %d",div);
         break;
        case 5:
         printf("mod is %d",mod);
         break;     
    }
  


    return 0;
}    