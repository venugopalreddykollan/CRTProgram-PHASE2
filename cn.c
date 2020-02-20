#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
struct node *prev;
}*head=NULL,*newnode;
void create(int item)
{
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=item;
newnode->prev=NULL;
newnode->next=NULL;
head=newnode;
}
void insertpos()
{

