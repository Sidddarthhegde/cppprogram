#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
char s1[20],s2[29];
int choice,res;

printf("Enter 2 strings\n");
scanf("%s%s",&s1,&s2);

printf("1:string copy   2:string concat\n");
printf("3:string compare\n");

printf("enter your choice");
scanf("%d",&choice);

switch(choice)
{
   case 1:strcopy(s1,s2);
           printf("after copying %s",s1);
            break;

    case 2:strconcat(s1,s2);
              printf("after concat %s",s1);
               break;
 
    case 3:res=strcomp(s1,s2);
             if(res==0)
            printf("strings are equal\n");
          else if(res>0)
            printf("first string is greater\n");
           else
            printf("second string is greater\n");
                 break;
    default:printf("wrong option\n");
}
}

void strcopy(char* s1,char* s2)
{
    while(*s2!='\0')
    {
        *s1=*s2;
         s1++;
         s2++;
    }
       *s1='\0';
}

void strconcat(char* s1,char* s2)
{
    
    while(s2!='\0')
    {
         *s1=*s2;
          s1++;
          s2++;
    }
       *s1='\0';
}

int strcomp(char* s1,char* s2)
{
    while(*s1='\0'||*s2!='\0')
    {
       if(*s1!=*s2)
         return(*s1-*s2);
        s1++;
        s2++;
    }

    return 0;
}



