#include<stdio.h>
#include<math.h>
int main()
{ long long M,N,Summation;
  scanf("%lld %lld",&M,&N);
  Summation=(M%10)+(N%10);
  printf("%lld",Summation);
  return 0;
  }
