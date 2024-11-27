//Given 4 numbers A, B, Cand D.Print the last 2 digits from their Multiplication.
#include<stdio.h>
int main()
{
    long long int a,b,c,d,mul;
    printf("Enter four number   :");
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    mul=a*b*c*d;
    printf("%.2lld",mul%100);
}
