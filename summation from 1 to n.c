//Given a number N. Print the summation of the numbers that is between 1 and N(inclusive).

#include<stdio.h>
#include<math.h>
int main()
{  long long int s,n;
   printf("Enter a interger Number  :");
   scanf("%lld",&n);
   s=(n*(n+1))/2;
   printf("%lld",s);
   return 0;
}
