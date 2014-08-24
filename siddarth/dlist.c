#include<stdio.h>
#include<stdlib.h>


struct node
{
int info;
struct node *llink;
struct node *rlink;
};

typedef struct node node;
node* insert_front(int item,node* head);
node* insert_left(int item,node* head);
node* delete_item(int item,node* head);
void display(node* head);
void main()
{
node* head;
int choice,item;

head->rlink=head;
head->llink=head;

for(;;)
{
         printf("1:insert_front    2:insert_left\n");
        printf("3:delete_info    4:display\n");
         printf("5:Exit\n");
       printf("Enter the choice\n");
        scanf("%d",&choice);
       switch(choice)
       {
            case 1:  printf("Enter the item \n");
                     scanf("%d",&item);
                         head=insert_front(item,head);
                        break;

            case 2:  printf("Enter the key\n");
                       scanf("%d",&item);
                      head=insert_left(item,head);
                        break;

             case 3:    printf("Enter the key to be deleted \n");

                          scanf("%d",&item);
                         head=delete_item(item,head);
                          break;

              case 4:   display(head);
                          break;

                  default:exit(0);
     }

}

}

node* insert_front(int item,node* head)
{
node  *temp;
node  *cur;

temp=( node*) malloc(sizeof( node));
temp->info=item;

cur=head->rlink;

head->rlink=temp;
temp->llink=head;
temp->rlink=cur;
cur->llink=temp;

return head;
}


node* insert_left(int item,node* head)
{
node  *temp;
node  *prev;
node  *cur;

if(head->rlink==head)
{
printf("list is empty\n");
return head;
}

cur=head->rlink;
while(cur !=head)
{
if(item==cur->info)
break;
cur=cur->rlink;
}

if(cur==head)
{
printf("Key not found\n");
return head;
}

prev=cur->llink;

printf("Enter the item to insert towards left of %d=",item);

temp=( node*) malloc(sizeof( node));

temp->info=item;

prev->rlink=temp;
temp->llink=prev;
cur->llink=temp;
temp->rlink=cur;

return head;
}

node*  delete_item(int item,node* head)
{

node  *prev;
node *cur;
node *next;

if(head->rlink==head)
{
printf("list is empty\n");
return head;
}

cur=head->rlink;
while(cur !=head)
{
if(item==cur->info)
break;
cur=cur->rlink;
}

if(cur==head)
{
printf("item not found\n");
return head;
}

prev=cur->llink;
next=cur->rlink;
prev->rlink=next;
next->llink=prev;
free(cur);

return head;
}

void display(node* head)
{

node *temp;

if(head->rlink==head)
{
  printf("list is empty\n");
    return;
}
printf("contents of list is\n");
temp=head->rlink;
while(temp !=head)
{
    printf("%d",temp->info);
     temp=temp->rlink;
}

}


