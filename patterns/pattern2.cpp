
#include<bits/stdc++.h>
using namespace std;

void prints(int n)
{
    for(int i=0;i<n;i++)        //for one ith loop one full j loop till n gets completed
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main()
{
    
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