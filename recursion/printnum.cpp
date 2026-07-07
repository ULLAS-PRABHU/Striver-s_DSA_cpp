#include<bits/stdc++.h>
using namespace std;

void printnm(int i,int n)
{
    if(i>n)
        return;

    cout<<i<<" ";
    printnm(i+1,n);
}

int main()
{
    int n;
    cin>>n;

    printnm(1,n);

    return 0;
}