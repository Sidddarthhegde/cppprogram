#include<stdio.h>
#include<stdlib.h>
#define stacksize 10

void main()
{
int top;
int choice,item,item_deleted;
int s[10];
top=-1;

for(;;)
{
printf("1:push    2:pop\n");
printf("3:display\n");
printf("4:Exit\n");

printf("enter your choice\n");
scanf("%d",&choice);

switch(choice)
{
    case 1:printf("enrer the item\n");
            scanf("%d",&item);
            push(item,&top,s);
             break;

    case 2:item_deleted=pop(&top,s);
             if(item_deleted==-1)
              printf("stack is empty\n");
                

              else
                   printf("deleted item is %d\n",item);
            break;
    case 3: display(top,s);
             break;

     default:exit(0);
}

}
}
void push(int item,int* top,char s[10])
{
if(*top==stacksize-1)
{
printf("stack is full");
return;
}

*top=*top+1;
s[*top]=item;
}

int pop(int* top,char s[10])

{
int item;
if(*top==-1)
{
printf("stack is empty");
return;
}
item=s[(*top)--];
return item;
}

void display(int top,char s[10])
{
int i;

for(i=0;i<=top;i++)
{
printf("%d\n",s[i]);
}

}


