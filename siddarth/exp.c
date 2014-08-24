#include<stdio.h>
#include<math.h>
#include<string.h>

double compute(char symbol,double op1,double op2);

    
    
       
  
  
    
 


void main()
{
double s[20];
double res;
double op1;
double op2;

char symbol;
int top;
int i;
char postfix[10];

printf("enter your postfix expression\n");
scanf("%s",postfix);
top=-1;
for(i=0;i<strlen(postfix);i++)
{
symbol=postfix[i];

if(isdigit( symbol))

s[++top]=symbol-'0';

else
{
    op2=s[top--];
     op1=s[top--];
   res= compute(symbol,op1,op2);
   s[++top]=res;
 }
}
res=s[top--];
printf("%f\n",res);
}

double compute (char symbol,double op1,double op2)
{
      switch(symbol)
      {
         case '+': return op1+op2;

         case '-': return op1-op2;

         case '*': return op1*op2;

         case '/': return op1/op2;

         case '$': return pow(op1,op2);
      }
}

  
