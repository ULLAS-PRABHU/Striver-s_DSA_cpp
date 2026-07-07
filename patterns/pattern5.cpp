
#include<bits/stdc++.h>
using namespace std;

void prints(int n)
{
    for(int i=1;i<=n;i++)        //for one ith loop one full j loop till n gets completed
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<j;
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
        int n=5;
    prints(n);
    }
    return 0;
}