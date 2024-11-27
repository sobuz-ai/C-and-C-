//Given 4 numbers A,B,C and D. If A^B> C^D .print "YES" otherwise, print "NO".
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int a,b,c,d;
    double res1,res2;
    cout<<"Enter value of a,b,c,d  :";
    cin>>a>>b>>c>>d;
    res1=b*(double)log(a);
    res2=d*(double)log(c);
    if(res1>res2)
    {
     cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
