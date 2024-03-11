#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	
};
struct node *head, *tail;
//////////////////----------------------------create circular linked list-----------------------------------------------------////////////////////////////////////
void create()
{
	struct node *temp, *newnode;
	int choice;
	head=0;
	while(choice)
	{
		newnode= (struct node*)malloc(sizeof(struct node));
		newnode->next=0;
		printf("ENTER DATA \n");
		scanf("%d",&newnode->data);
		if(head==0)
	{
			head=tail=newnode;
		}
		else
		{
			tail->next=newnode;
			tail=newnode;
		}
		tail->next=head;
		printf("DO YOU WANT TO CONTINUE\n");
		scanf("%d",&choice);
	}
}
//////////////////----------------------------insert at begin-----------------------------------------------------////////////////////////////////////
void insert_at_begin()
{
	struct node *newnode;
	newnode= (struct node*)malloc(sizeof(struct node));
	newnode->next=0;
	printf("ENTER DATA YOU WANT TO INSERT AT BEGIN\n");
	scanf("%d",&newnode->data);
	if(head==0)
	{
		head=tail=newnode;
	}
	else
	{
		newnode->next=head;
		head=newnode;
		tail->next=head;
	}
}
//////////////////----------------------------insert at last position-----------------------------------------------------////////////////////////////////////
insert_at_end()
{
	struct node *newnode;
	newnode= (struct node*)malloc(sizeof(struct node));
	newnode->next=0;
	printf("ENTER DATA YOU WANT TO INSERT AT END\n");
	scanf("%d",&newnode->data);
	if(head==0)
	{
		head=tail=newnode;
	}
	else
	{
		tail->next=newnode;
		newnode->next=head;
	}
}
//////////////////----------------------------display-----------------------------------------------------////////////////////////////////////
void display()
{ 
		struct node *temp;
		if(head==0)
		{
			printf("EMPTY\n");
		}
		else
		{
			temp=head;
		while(temp->next!=head)
		{
			printf("%d\t", temp->data);
			temp=temp->next;
		}
		printf("%d",temp->data);
		}
		printf("\n");
}
//////////////////----------------------------length calculate-----------------------------------------------------////////////////////////////////////
int length()
{
	struct node *temp;
	temp=head;
	int count=1;
	while(temp->next!=head)
	{
		count++;
		temp=temp->next;
	}
	return count;
}
//////////////////----------------------------insert at desired position-----------------------------------------------------////////////////////////////////////
void insert_at_pos()
{
	struct node *newnode, *temp,*ptr;
	int pos, i=1;
	newnode= (struct node*)malloc(sizeof(struct node));
	newnode->next=0;
	printf("ENTER DATA YOU WANT TO INSERT AT DESIRED POSITION\n");
	scanf("%d",&newnode->data);
	printf("ENTER POSITION \n");
	scanf("%d",&pos);
	if(pos<1 || pos>length())
	{
		printf("INVALID POSITION\n");
		
	}
	else
	{
		temp=head;
		while(i<pos)
		{
			ptr=temp;
			temp=temp->next;
			i++;
		}
		newnode->next=temp;
		ptr->next=newnode;
		
	}
}
 int main()
 {
 	int ch;
 	printf("CREATE ONE LINKED LIST TO PERFORM ALL TYPE DELETION OPERATION\n");
 	create();
 	while(1){
 		printf("press 4 to display, press 1 insert at begin , press 2 insert at end , press 3 insert at desired positions\n");
 	scanf("%d",&ch);
	switch(ch)
	{
		case 4: 
			display();
			break;
		case 1: 
			insert_at_begin();
			break;
		case 2: 
			insert_at_end();
			break;
		case 3:
			insert_at_pos();
	}}
 }
