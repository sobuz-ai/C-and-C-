//Given a mathematical expression. The expression will be one of the following expressions: A+B=C, A-B=C and A*B=C.
//where A,B,C are three numbers, S is the sign between A and B, and Q the '=' sign.
//Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    char s,q;
    cout<<"Enter the expression  :";
    cin>>a>>s>>b>>q>> c;
    if(s=='+')
    {
        if(c==a+b)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<a+b;
        }
    }
    if(s=='-')
    {
        if(c==a-b)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<a-b;
        }
    }
    if(s=='*')
    {
        if(c==a*b)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<a*b;
        }
    }



}
