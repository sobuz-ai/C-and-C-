#include<stdio.h>
#include<math.h>
main()
{ long long x;
  scanf("%lld",&x);
  while(x>9)
  {x=x/10;}
  if(x%2==0)
  printf("EVEN");
  else
  printf("ODD");
}
