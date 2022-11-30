#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *n;
	struct node *p;
};
struct node *start = NULL;
void insert_rear()
{
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	struct node *p1 = start;
	int a;
	printf("\nenter new data\n");
	scanf("%d",&a);
	new_node->data = a;
	if(start==NULL)
	{
		new_node->n=NULL;
		start = new_node;
		new_node->p=NULL;
		return;
	}
	else
	{
		while(p1->n != NULL)
		{
			p1=p1->n;
		}
		new_node->n=NULL;
		new_node->p=p1;
		p1->n=new_node;
	}
}
void delete_front()
{
	struct node *p1=start, *p2;
	if(start == NULL)
	{
		printf("cannnot delete from empty list\n");
		return;
	}
	if(p1->n==NULL)
	{
		start=NULL;

		free(p1);
	}
	else
	{
		start=p1->n;
		free(p1);
	}
}
void delete_rear()
{
	struct node *p1=start,*p2;
	if(start == NULL)
	{
		printf("cannot remove from empty list\n");
		return;
	}

	while(p1->n!= NULL)
	{
		p1=p1->n;
	}
	if(p1->n==NULL &&p1->p==NULL)
	{
		start = NULL;

		free(p1);
	}
	else
	{   p2=p1->p;
		p2->n=NULL;
		free(p1);
	}
}

void insert_front()
{
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	int a;
	printf("enter new data\n");
	scanf("%d",&a);
	new_node -> data = a;
	new_node -> n = start;
	start->p=new_node;
	start = new_node;

	new_node -> p = NULL;
}
void display()
{
	struct node *p = start;
	if(start==NULL)
	{
		printf("empty list\n");
		return;
	}
	while(p != NULL)
	{
		printf("%d -> ",p->data);
		p=p->n;
	}
	printf("\n");
}
int main()
{
	int a=0;
	while(a==0)
	{
		int ch;
		printf("\nenter choice\n1.insert front\n2.display\n3.insert rear\n4.exit\n5.delete front\n6.delete rear\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			insert_front();
			break;
			case 2:
			display();
			break;
			case 3:
			insert_rear();
			break;
			case 4:
			a=1;
			break;
			case 5:
			delete_front();
			break;
			case 6:
			delete_rear();
			break;
			default:
			printf("invalid input");
		}
	}
	return 0;
}