#include<stdio.h>
int main()
{
   long long int n,a=0,b=1,c,d;
   int i,j;
   scanf("%d",&j);
   for(i=1;i<=j;i++,a=0,b=1)
   {
       scanf("%lld",&n);
       n=n+1;
       for(c=0;c<n;c++)
       {
          if(c<=1)d=c;
          else
          {
             d=a+b;
             a=b;
             b=d;
          }
       }
          printf("Fib(%lld) = %lld\n",n-1,d);
   }
   return 0;
}
