#include<bits/stdc++.h>
using namespace std;

void printn(int i,int n)
{
    if(i>n)
        return;

    cout<<"Ullas"<<endl;
    printn(i+1,n);
}
int main()
{
    int n;
    cin>>n;
    printn(1,n);
    return 0;
}