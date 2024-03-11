#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	
};
struct node *head;
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
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		newnode->next=head;
		printf("DO YOU WANT TO CONTINUE\n");
		scanf("%d",&choice);
	}
}
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
		
}
int main()
{
	create();
	display();
}
