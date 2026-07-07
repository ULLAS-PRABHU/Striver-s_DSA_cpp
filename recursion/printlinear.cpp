#include<bits/stdc++.h>
using namespace std;

void print1(int i,int n)
{
    if(i<1)
        return;
    
    print1(i-1,n);
    cout<<i<<" ";
}

int main()
{
    int n;
    cin>>n;

    print1(n,n);
}