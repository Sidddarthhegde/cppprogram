#include<stdio.h>
#include<stdlib.h>

struct node
{
     int info;
     struct node *link;
};
   typedef struct node node;

 node* insert_front(int item,node* first);
 node* delete_front(node* first);
 void  display(node* first);

 void main()
 {
      node* first=NULL;
      int choice,item;

      for(;;)
      {
          printf("1:PUSH\n");
          printf("2:POP\n");
          printf("3:DISPLAY\n");
          printf("4:EXIT\n");

          printf("enter your choice\n");
          scanf("%d",&choice);

          switch(choice)
          {

             case 1:    printf("enter your item");
                        scanf("%d",&item);
                      
                         first=insert_front(item,first);
                            break;

            case 2:    first =delete_front(first);
                          break;
 
            case 3:    display(first);
                         break;

            default: 
                        exit(0);
         }
      }
   }

    node* insert_front(int item,node* first)
    {
         node* temp;
        
         temp=(node*) malloc(sizeof(node));

          temp->info=item;

          temp->link=first;
          
           return temp;
    }




    
     node* delete_front(node* first)
    {
         node* temp;
       
         if(first==NULL)
         {
              printf("list is empty");
                 return first;
        }
  
         temp=first;
         temp=temp->link;
         
         free(first);

         return temp;

    }








          
          
          
           
           
        
          
  
           
        
        
        
         
            
      
             
            
         


       
       

         
        
         void display(node* first)
         {
             node* temp;
           
             if(first==NULL)
             {
                   printf("list is empty\n");
                      return;
             }
       
                temp=first;
    
                while(temp!=NULL)
                {
                    printf("%d",temp->info);
                      temp=temp->link;
                }
                  printf("\n");
           }
 
    
