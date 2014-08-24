#include<stdio.h>
#include<stdlib.h>
#define queuesize 10


void insert_rear(int item,int* r,int* count, int q[]);
void delete_front(int q[],int* f,int* count);
void display(int q[],int f,int count);

void main()
{
int f,r,q[10],count;
int choice,item;

f=0,r=-1,count=0;

for(;;)
{
printf("1:insert_rear       2:delete_front\n");
printf("3:display\n");
printf("4:exit\n");

printf("enter your choice\n");
scanf("%d",&choice);

switch(choice)
{
case 1:printf("enter your item\n");
       scanf("%d",&item);
        insert_rear(item,&r,&count ,q);
         break;

case 2: delete_front(q,&f,&count);
          break;

case 3:display(q,f,count);
         break;

default:exit(0);
}

}

}

void insert_rear(int item,int* r,int* count ,int q[])
{
if(*count==queuesize-1)
{
printf("queue is full");
return;
}
*r=(*r+1)%queuesize;
q[*r]=item;
*count+=1;
}

void delete_front(int q[],int* f,int* count)
{
if(*count==0)
{
printf("queue is empty");
return;
}

printf("item to be deleted is=%d\n",q[(*f)]);
*f=(*f+1)%queuesize;
*count-=1;
}

void display(int q[],int f,int count)
{
int i;
if(count==0)
{
printf("queue is empty");
return;
}
printf("contents of queue is\n");
for(i=1;i<=count;i++)
{
printf("%d\n",q[f]);
f=(f+1)%queuesize;
}
}


