#include<stdio.h>
#include<stdlib.h>



struct node
{
   int info;
   struct node *link;
};
typedef struct node node;
node* insert_rear(int item,node* first);
node* delete_front(node* first);
void display(node* first);

void main()
{
node* first=NULL;
int choice,item;

for(;;)
{
printf("1:insert_rear        2:delete_front\n");
printf("3:display\n");
printf("4:exit\n");
printf("enter your choice\n");
scanf("%d",&choice);

switch(choice)
{
case 1: printf("enter item\n");
        scanf("%d",&item);
        first=insert_rear(item,first);
          break;

case 2: first=delete_front(first);
           break;

case 3: display(first);
          break;

default:exit(0);
}

}

}

node* insert_rear(int item,node* first)
{
node *temp;
node *cur;
temp=(node*) malloc(sizeof(node));

temp->info=item;

temp->link=NULL;
if(first==NULL)
return temp;

cur=first;

while(cur->link!=NULL)
{
cur=cur->link;

}
cur->link=temp;
return first;
}

node* delete_front(node* first)
{
node *temp;
if(first==NULL)
{
printf("list is empty\n");
 return first;
}
temp=first;
temp=temp->link;
free(first);

return temp;
}

void display(node* first)
{
node *temp;
if(first==NULL)
{
printf("list is empty\n");
return ;
}

temp=first;

while(temp!=NULL)
{
printf("%d\n",temp->info);
temp=temp->link;
}

}

