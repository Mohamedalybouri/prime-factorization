#include <stdio.h>

void main()
{
   int N,i,aux,j;
   int T[100],Ti[100];
   do
   {
       printf("Donnez l'entier positif: ");
       scanf("%d",&N);
   }while(N<=0);
   aux=N;
   j=0;
   i=2;
   do
   {
       Ti[j]=1;
       if(aux%i==0)
       {
           aux/=i;
           T[j]=i;
           if(T[j]==T[j-1])
           {
               j--;
               Ti[j]++;
           }
           j++;
       }
       else i++;
   }while(aux!=1);
   printf("%d=",N);
   for(i=0;i<j-1;i++)
    printf("%d^%d*",T[i],Ti[i]);
    printf("%d^%d",T[j-1],Ti[j-1]);
}
