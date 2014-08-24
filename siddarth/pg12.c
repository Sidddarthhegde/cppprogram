#include<stdio.h>

void tower(int n,int source,int temp,int destination);

void main()
{
int n;
printf("enter no of discs");

scanf("%d",&n);

tower(n,'A','B','C');
}

void tower(int n,int source,int temp,int destination)
{
if(n==0)
return;

tower(n-1,source,destination,temp);

printf("Move disc %d from %c to %c",n,source,destination);

tower(n-1,temp,source,destination);

}

