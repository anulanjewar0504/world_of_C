# include <stdio.h>
int main(){
    int x[10],*p,sum,i,n;
    printf("Enter the number under 10\n");
    scanf("%d",&n);
    printf("enter the number\n-->\t");
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
        printf("next -->\t");
    }
    p=&x[0];
    sum=0;
    for(i=0;i<n;i++){
        
        if(*p>*(p+i)){
            
            for(i=0;i<n;i++){
                if(*p>*(p+i)){
                    sum=*p;
                }
                else{
                    sum=*(p+i);
                    x[i] = sum;
                    *p=*(p+i);
                }
            }

    }
    }
     
     for(i=0;i<n;i++){
        printf("%d",x[i]);
     }

}