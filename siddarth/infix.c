#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
char infix[10];
char postfix[10];

printf("enter the infix expression\n");
scanf("%s",infix);

infix_postfix(infix,postfix);

printf("the postfix expression is\n");
printf("%s",postfix);
}
int F(char symbol)
{
switch(symbol)
{
  case '+':
  case '-':return 2;

  case '*':
  case '/':return 4;

  case '$':return 5;

  case '(':return 0;

  case '#':return -1;

  default:return 8;
}

}

int G (char symbol)
{
switch(symbol)
{
  case '+':
  case '-':return 1;

  case '*':
  case '/':return 3;

  case '$':return 6;

  case '(':return 9;
  
  case ')':return 0;

  default:return 7;
}

}


void infix_postfix(char infix[10],char postfix[10])
{
int top;
int i;
char symbol;
char s[20];
int j;
int choice,item;
top=-1;
s[++top]='#';
j=0;

for(i=0;i<strlen(infix);i++)
{
symbol=infix[i];

while(F(s[top])>G(symbol))
{
  postfix[j]=s[top--];
   j++;
}

if(F(s[top])!=G(symbol))
s[++top]=symbol;

else
     top--;
}

while(s[top]!='#')
{
   postfix[j++]=s[top--];
}
postfix[j]='\0';

}
 
 
 
     

 
   

    

     

    

     
   


  
  
   
     

 
    

    

   

     

     
  


