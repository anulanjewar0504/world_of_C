//Write a menu driven program for implementing the below functionality of arrays 1. Create an array 2. Display the array 3. Insert into an array 4. Delete from an array 5. Search in an array 6. Exit
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int a[10], pos, elem;
int n = 0;
void create();
void display();
void insert();
void del();
void search();
int main()
{
 int choice;

 while(1)
 {
	printf("\n\n~~~~MENU~~~~");
	 printf("\n=>1. Create an array of N integers");
	 printf("\n=>2. Display of array elements");
	 printf("\n=>3. Insert ELEM at a given POS");
	 printf("\n=>4. Delete an element at a given POS");
	 printf("\n=>5. Search an element in arrey");
	 printf("\n=>6. Exit");
	 printf("\nEnter your choice: ");
	 scanf("%d", &choice);
	 switch(choice)
	 {
		 case 1: create();
			break;
		 case 2: display();
			break;
		 case 3: insert();
			break;
		 case 4:del();
			break;
		 case 5:search();
			 break;
		 case 6:exit(1);
			 break;
		 default:printf("\nPlease enter a valid choice:");
	 }
    }
   getch();
}

void create()
{
 int i;
 printf("\nEnter the number of elements: ");
scanf("%d", &n);
 printf("\nEnter the elements: ");
 for(i=0; i<n; i++)
 {
 scanf("%d", &a[i]);
 }
}
void display()
{
 int i;
 if(n == 0)
 {
 printf("\nNo elements to display");
 return;
 }
 printf("\nArray elements are: ");
 for(i=0; i<n;i++)
 printf("%d\t ", a[i]);
}
void insert()
{
 int i;
 if(n == 10)
 {
 printf("\nArray is full. Insertion is not possible");
 return;
 }
 do
 {
printf("\nEnter a valid position where element to be inserted: ");
scanf("%d", &pos);
 }
 while(pos > n);
 printf("\nEnter the value to be inserted: ");
 scanf("%d", &elem);
 for(i=n-1; i>=pos-1; i--)
 {
 a[i+1] = a[i];
 }
 a[pos-1] = elem;
 n = n+1;
// display();
}
void del()
{
 int i;
 if(n == 0)
 {
 printf("\nArray is empty and no elements to delete");
 return;
 }
 do
 {
 printf("\nEnter a valid position from where element to be deleted: ");
 scanf("%d", &pos);
 }while(pos>=n);
 elem = a[pos-1];
printf("\nDeleted element is : %d \n", elem);
 for( i = pos-1; i< n-1; i++)
 {
 a[i] = a[i+1];
 }
 n = n-1;
// display();
}
void search()
{
 int i,elem,pos;
 printf("\n\n                             Arrey searching\n");
 printf(" --------------------------------------------------\n");
 printf("\n\n\t Enter element to be searched:");
 scanf("%d",&elem);
 printf("Element found at : ");
   for(i=0;i<n;i++)
   {
     if(elem==a[i])
      printf("%d",i+1);
   }
//display();
}
