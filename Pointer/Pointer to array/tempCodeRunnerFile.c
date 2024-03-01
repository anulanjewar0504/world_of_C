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
                    sum=*p;#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void descendingBubbleSort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) < *(arr + j + 1)) {
                swap(arr + j, arr + j + 1);
            }
        }
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    descendingBubbleSort(arr, size);

    printf("\nArray sorted in descending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
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