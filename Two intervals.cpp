//Given the boundaries of 2 intervals. Print the boundaries of their intersection.
//Note: Boundaries mean the two ends of an interval which are the starting number and the ending number.
//Input(Only one line contains two intervals [l1,r1], [l2,r2].where (1≤l1,l2,r1,r2≤109), (l1≤r1,l2≤r2).It's guaranteed that l1≤r1 and l2≤r2).
//Output(If there is an intersection between these 2 intervals print its boundaries , otherwise print -1.)

#include<iostream>
using namespace std;
int main()
{
    int l1,r1,l2,r2;
    cout<<"Enter four interger number  :";
    cin>>l1>>r1>>l2>>r2;
    if(max(l1,l2)>min(r1,r2))
    {
        cout<<"-1";
       }
    else
    {
        cout<<max(l1,l2)<<" "<<min(r1,r2);
    }

}
