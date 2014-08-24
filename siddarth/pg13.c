#include<stdio.h>

void main()
{

int n,i,a[20],item,pos;

printf("Enter the number of elements");
scanf("%d",&n);

printf("Enter %d items\n",n);

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("enter item to be searched\n");

scanf("%d",&item);

pos=search(item,a,0,n-1);

if(pos==-1)

printf("item not found\n");

else
     printf("item found at %d position",pos);
}

int search(int key,int a[],int low,int high)
{
   int mid;

  if(low>high)
   return -1;

   mid=(low+high)/2;

   if(key==a[mid])
    return mid;

    if(key<a[mid])
      return  search(key,a,low,mid-1);

     else

          return search(key,a,mid+1,high);
 }

