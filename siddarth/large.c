#include<stdio.h>
#include<stdlib.h>

void main()
{
    float *p;
     float lar;
    int i,n;

    printf("Enter the no of elements");
    scanf("%d",&n);

   p=(float*) malloc(sizeof(float*)* n);

   printf("Enter the no's");

   for(i=0;i<n;i++)
   {
       scanf("%f",p+i);
   }
   lar=*p;
 
   for(i=0;i<n;i++)
   {
      if (*(p+i)> lar)
      lar= *(p+i);

   }

     printf("Largest value is %f",lar);

    

  }

