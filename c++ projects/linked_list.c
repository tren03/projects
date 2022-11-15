#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start;

void insert_front()
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node)); 
    int new_data;
    printf("enter data : ");
    scanf("%d",&new_data);
    new_node -> data = new_data;
    new_node -> next = start;
    start = new_node;
}
void delete_front()
{
    //struct node* ptr = start;
    start = start->next;
    // free(ptr);
}
void delete_rear()
{
    struct node *ptr1,*ptr2;
    ptr1 = start;
    if(ptr1->next == NULL)
    {
        start = NULL;        
    }
    else
    {
        while(ptr1->next != NULL)
        {
        ptr2 = ptr1;
        ptr1 = ptr1->next; 
        } 
        ptr2 -> next = NULL;
        // free(ptr1);
    }
    
}
void insert_rear()
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    int new_data;
    printf("enter data : ");
    scanf("%d",&new_data);
    new_node -> data = new_data;
    struct node* ptr = start;
    if(ptr == NULL)
    {
        new_node->next = NULL;
        start = new_node;
    }  
    else 
    {  
        while(ptr->next != NULL)
        {
            ptr=ptr->next;
        }
        ptr -> next = new_node;
        new_node -> next = NULL;
    }

}
void display()
{
    struct node *ptr = start;
    if(start == NULL)
    {
        printf("\nempty list\n");
    }
    while(ptr != NULL)
    {
        
        printf("%d ->",ptr->data);
        ptr = ptr -> next;
        // if(ptr->next=NULL)
        // {
        //     printf("%d",ptr->data);
        //     break;
        // }
    }

}
int main()
{
    int ch=0;
    int a=0;
    while(a==0)
    {
        printf("*** MENU ***\n1. insert front\n2.display\n3.exit\n4.insert rear\n5.delete front\n6.delete_rear\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert_front();
            break;
            case 2 : display();
            break;
            case 3 : printf("\nprogram exited");
                     a=1;
            break;
            case 4 : insert_rear();            
            break;
            case 5: delete_front();
            break;
            case 6 : delete_rear();
            break;
            default : printf("\ninvalid output\n");
            break;

        }
    }
}
