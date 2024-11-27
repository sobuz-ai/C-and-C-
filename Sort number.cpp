//Given three numbers A,B,C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

#include<iostream>
using namespace std;
int sorting(int a,int b,int c)
{
    int temp;
    if(a>b)
    { temp=a;
      a=b;
      b=temp;

    }
    if(a>c)
    { temp=a;
      a=c;
      c=temp;

    }
    if(b>c)
    { temp=b;
      b=c;
      c=temp;

    }
   cout<<a<<endl;
   cout<<b<<endl;
   cout<<c<<endl;
}
int main()
{
    int a,b,c;
    cout<<"Enter three number";
    cin>>a>>b>>c;
    sorting(a,b,c);
    cout<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}
