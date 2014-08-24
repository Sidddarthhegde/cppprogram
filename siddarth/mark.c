#include<stdio.h>
#include<stdlib.h>

struct student
{
char name[15];
int marks[10];
int total;
};

void main()
{
struct student *p;
int m,n;
int i,j;

printf("Enter no of students\n");

scanf("%d",&m);

printf("Enter no of subjects\n");
scanf("%d",&n);

p=(struct student*) malloc(m*sizeof(struct student));

for(i=0;i<m;i++)
{
    printf("enter student name\n");
    scanf("%s",(p+i)->name);
   
   ( p+i)->total=0;
   
    printf("enter marks\n");
    for(j=0;j<n;j++)
    {
       scanf("%d",&(p+i)->marks[j]);
        (p+i)->total=(p+i)->total+(p+i)->marks[j];
     }
}
for(i=0;i<m;i++)
{
printf("%s",(p+i)->name);
printf("%d",(p+i)->total);
}
}



