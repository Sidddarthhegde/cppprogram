#include<stdio.h>
#include<alloc.h>
#include<process.h>

struct node
{
   int info;
   struct node *llink;
   struct node *rlink;

};
    typedef struct node* NODE;

   NODE insert_front(int item,NODE head);
   NODE insert_left(int item,NODE head);
   NODE delete_item(int item,NODE head);
   void display(NODE head);

    void main()
    {
        NODE head;
        int choice,item;

        head=getnode();

        head->rlink=head;
        head->llink=head;

        for(;;)
        {
              printf("1.insert-front
                      2.insert_left
                      3.delete_info
                      4.display
                      5.exit\n");
      
              printf("Enter your choice");
              scanf("%d",&choice);

            switch(choice)
            {
                 case 1:   printf("enter your item")
                           scanf("%d",&item);

                           head=insert_front(item,head);
                              break;

                case 2:   printf("enter your item");
   
                           scanf("%d",&item);
                           head=insert_left(item,head);
                             break;

                case 3:  printf("enter item to be deleted\n");
                         scanf("%d",&item);
                          head=delete_item(item,head);
                               break;

                case 4:  display(head);
                            break;

                 default:exit(0);

           }
      }
  }

       NODE insert_front(int item,NODE head)
      {
           NODE temp,cur;

                      
