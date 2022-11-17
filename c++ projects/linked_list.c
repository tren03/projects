#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start  = NULL;
void delete_after()
{
    struct node *p1=start,*p2,*p3=NULL;
    int a;
    if(start == NULL)
    {
        printf("\n cant remove from empty list");
    }
    else
    {
        printf("\nenter data to remove next element\n");
        scanf("%d",&a);       
        while(p1->data!=a)
        {
            p1=p1->next;
        }
        if(p1->next == NULL)
        {
        printf("cannot remove next element from last element\n");
        }  
        else
        {
        // if(p1->next == NULL)
        // {
        //     printf("cannot remove next element from last element\n");
        // }   
        
        
            p2=p1->next;
            p3=p2->next; 
            p1->next = p3;
            free(p2); 
        }             
    }

}
void delete_before()
{
    struct node *p1=start,*p2,*p3=start;
    int a;
    if(start == NULL)
    {
        printf("\n cant remove from empty list");
    }
    else
    {
        printf("\nenter data to remove previous element\n");
        scanf("%d",&a);       
        while(p3->data!=a)
        {
            p2=p3;
            p3=p3->next;
        }
        if(p3==start)
        {
            printf("\ncant remove element before first element \n");
        }
        else
        {
            if(p1!=p2)
            {
                while(p1->next!=p2)
                {
                p1=p1->next;
                }
            }
            else 
            {
                start = p3;
            }
            
            // if(p1==start)
            // {
            //     start = p3;
            // }
           
            p1->next=p3;
            free(p2);
            
        }


    }

}
void insert_before()
{
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    int new_data;
	int nos;
    struct node *p = start;
    struct node *p1=start;
    
    if(start != NULL)
    {        
        printf("\n enter number : ");
        scanf("%d",&nos);
        printf("\nenter new data : ");
        scanf("%d",&new_data);
        while(p->data != nos)
        {
            p1=p;
            p=p->next;
        }
        if(p1 != start)
        {
            p1->next = new_node;
           
        }
        else 
        {
            start = new_node;
            
        }
        new_node->next = p;
        new_node->data = new_data;
        
    }
    else if(start == NULL)
    {
        printf("\n empty list, cant specify element to add before");
    }      
    // else if(start->next==NULL)
    // {
    //     new_node -> next = start;
    //     start = new_node;
    //     new_node->data = new_data;
                
    // } 
  

}
void insert_after()
{
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	int new_data;
	int nos;
	struct node *p1;
	struct node *p = start;
    if(start != NULL)
    {
        printf("\n enter number : ");
        scanf("%d",&nos);
        printf("\nenter new data : ");
        scanf("%d",&new_data);
        while(p->data != nos)
        {
            p=p->next;
        }
        p1=p->next;
        p->next = new_node;
        new_node -> next = p1;
        new_node -> data = new_data;
    }
    else 
    {
        printf("\n empty list, cant add if there is no element to specify");
    }

}
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
    struct node* ptr = start;
    start = start->next;
    free(ptr);
    if(start == NULL)
    {
        printf("cant delete from empty list");
    }
}
void delete_rear()
{
    struct node *ptr1,*ptr2;
    ptr1 = start;
    if(start == NULL)
    {
        printf("cant delete from empty list");
    }
    else
    {
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
            free(ptr1);
        }
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
        printf("\n*** MENU ***\n1. insert front\n2.display\n3.exit\n4.insert rear\n5.delete front\n6.delete_rear\n7.insert after\n8.insert before\n9.delete befeor\n10.delete after\n");
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
            case 7 : insert_after();
            break;
            case 8 : insert_before();
            break;
            case 9 : delete_before();
            break;
            case 10 : delete_after();
            break;
            default : printf("\ninvalid output\n");
            break;

        }
    }
}
