#include<bits/stdc++.h>
using namespace std;

void prints(int n)
{
    for(int i=0;i<n;i++)        //for one ith loop one full j loop till n gets completed
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main()
{
    //nested loops
    //outer loop for lines or rows
    //inner loop for columns

    //outer loop-count the number of lines
    //for inner loop focus on columns and connect them somehow to the rows
    //print inside inner loop
    //observe symmetry(optional)

    int t;
    cout<<"How many times: ";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n=4;
    prints(n);
    }
    return 0;
}