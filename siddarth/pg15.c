#include<stdio.h>

struct node
{
int info;
struct node *llink;
struct node *rlink;
};

typedef struct node node;

node* insert(int item,node* root);
void inorder(node* root);
void preorder(node* root);
void postorder(node* root);

void main()
{
node* root;


int choice,item;
root=NULL;

for(;;)
{
printf("1:construct BST         2:inorder\n");
printf("3:preorder            4:  postorder\n");
printf("5:exit\n");
printf("enter your choice\n");
scanf("%d",&choice);

switch(choice)
{
case 1:printf("enter value of node");
       scanf("%d",&item);
        root=insert(item,root);
          break;

case 2:  if(root==NULL)
          printf("empty tree");

         else
             inorder(root);
             break;

case 3:if(root==NULL)
         printf("empty tree");
           
        else
           preorder(root);
           break;
case 4:if(root==NULL)
          printf("tree is empty");
           else
               postorder(root);
case 5:exit(0);

}
}
}

node* insert(int item,node* root)
{
node *temp;
node *prev;
node *cur;

temp=(node*) malloc(sizeof(node));

temp->info=item;
temp->llink=NULL;
temp->rlink=NULL;

if(root==NULL)
return temp;

prev=NULL;
cur=root;

while(cur!=NULL)
{
prev=cur;

if(item==cur->info)
{
printf("duplicate values");
  free(temp);
return root;
}
if(item<cur->info)
   cur=cur->llink;

  else
    cur=cur->rlink;
}

if(item<prev->info)
prev->llink=temp;

return root;
}
 
void inorder(node* root)
{
if(root==NULL)
return;

inorder(root->llink);
printf("%d",root->info);
inorder(root->rlink);
}

void preorder(node* root)
{
if(root==NULL)
return;

printf("%d",root->info);
preorder(root->llink);
preorder(root->rlink);
}

void postorder(node* root)
{
if(root==NULL)
postorder(root->llink);
postorder(root->rlink);

printf("%d",root->info);
}
