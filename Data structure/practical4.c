#include<stdio.h>
#include<stdlib.h>

void create();
void disp();
struct node * search();
void searchsl();
struct node * finda(int);
struct node * finda(int item);
void insertbeg(int);
void insertafter(struct node *,int);
void insertsl();
void delete(int);
void findb(int);
struct node
{   
int data;    
struct node *next;
}*start=NULL;
struct node *loc,*locp;

int main()
{
	int choice,item,ele;
struct node*t;
	while(1)
	{  
	printf("\n\n*** MENU ***\n1.create\n2. Display\n3. Search\n4. Search Sorted List\n5. Insert at beg\n6.Insert after a node\n7. Insert in a sorted list\n8. Delete a node with a given location\n9. Exit\nEnter 	your choice: ");
scanf("%d",&choice);
switch(choice)   
{       
case 1 : create();
             break;       
case 2:  disp();       
             break;     
case 3: printf("Enter element to search : ");
        scanf("%d",&item);
        search(item);
        break;
case 4 : searchsl(item);
        break;
case 5 : printf("Enter element to insert : ");
        scanf("%d",&item);
    insertbeg(item);
	break;
	case 6: printf("Enter element after which to insert  :");
        scanf("%d",&ele);
        t=search(ele);
        printf("Enter element to insert  :");
        scanf("%d",&item);
        insertafter(t,item);
	    break;
case 7: printf("Enter element to insert  :");
        scanf("%d",&item);
        t=finda(item);
        insertafter(t,item);
	    break;
case 8 : 
        printf("Enter element to delete  :");
        scanf("%d",&item);
        findb(item);
        delete(item);
        break;
case 9: exit(0);       
      
 }
 } 
return 0;
}

void create()
{	struct node *ptr, *new1;
	char ch;
	start = ptr = (struct node *)malloc(sizeof(struct node));
	printf("Enter data for first node : "); 
	scanf("%d",&start->data);
	getchar();
	printf("Create more nodes (y/n) : "); 
	scanf("%c",&ch);
	while(ch=='y')
	{   	new1 = (struct node *)malloc(sizeof(struct node));     
		printf("\nEnter data for next node : ");     
		scanf("%d",&new1->data);     
		getchar();     
		ptr->next = new1;     
		ptr=new1;     
		printf("\nCreate more nodes (y/n) : ");     
		scanf("%c",&ch);
	}	
	return;
}
void disp()
{    
struct node *ptr;    
ptr= start;
while(ptr!=NULL)
{       
	printf("%d  ", ptr->data);       
	ptr=ptr->next;
}
free(ptr);
}

struct node * search(int item)
{
	struct node *ptr;    
	int count = 1;
	//printf("Item to be searched : ");
	//scanf("%d", &item);
	ptr= start;
	while(ptr!=NULL)
	{       	
		if(ptr->data==item)		
		{		    
			printf("item %d found at node %d  ", item, count); 
			return(ptr);
		}
		else	
		{	 
   			count++;
			    ptr=ptr->next;
		}
	}
	free(ptr);
	printf("Item not found");
	ptr=NULL;
	return(ptr);
}
void searchsl()
{
	struct node *ptr;    
	int count = 1, item;
	printf("Item to be searched : ");
	scanf("%d", &item);
	ptr= start;
	while(ptr!=NULL)
	{       	
		if(item<ptr->data)		
		{		    
			printf("item is not found");
			return;
		}
		else if(ptr->data==item)		
		{		    
			printf("item %d found at node %d  ", item, count);
			return;
		}
		else				 
   			{ count++;
			    ptr=ptr->next;
		}
	}
	free(ptr);
	printf("Item not found");
}

void insertbeg(int item)
{
	struct node *ptr;
	ptr = (struct node *)malloc(sizeof(struct node));
	//printf("Enter data for new node : "); 
	//scanf("%d",&ptr->data);
	ptr->data=item;
	ptr->next=start;
	start=ptr;
}

void insertafter(struct node *t, int item)
{
      if (t==NULL || start ==NULL)
	    {
		insertbeg(item);
	        return;
	}
    struct node *ptr;
	ptr = (struct node *)malloc(sizeof(struct node));
	  ptr->data=item;
	   ptr->next=t->next;
	    t->next=ptr;
}
	
struct node * finda(int item)
{
    struct node *ptr,*save;
    if (start==NULL || start->data>item)
       return(NULL);
    save=start;
    ptr=start->next;
    while(ptr!=NULL)
    {
        if (item<ptr->data)
            return save;
        save=ptr;
        ptr=ptr->next;
    }
    return(save);
}
void findb(int item)
{
    struct node *ptr,*save;
    ptr=start;
    printf("In delete");
    if(start->data==item)
        {
        loc=start;
	locp=NULL;
        return;
        }
    save=start;
    ptr=start->next;
    while(ptr!=NULL)
    {
        if(ptr->data==item)
        {
            loc=ptr;
            locp=save;
               printf("In item if");
            return;
        }
        save=ptr;
        ptr=ptr->next;
    }
    loc=NULL;
    return;
}

void delete(int item)
{
    if (loc==NULL)
    {
        
        return;
    }
    if (locp==NULL)
    {
        start=start->next;
        return;
    }
    else{
          
        locp->next=loc->next;
    }
    return;
}