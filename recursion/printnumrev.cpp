#include<bits/stdc++.h>
using namespace std;

void print(int n,int i)
{
    if(n<i)
        return;

    cout<<n<<" ";
    print(n-1,i);
}

void print1(int i,int n)
{
    if(i<1)
        return;
    cout<<i<<" ";
    print1(i-1,n);
}
int main()
{
    int n;
    cin>>n;

    print(n,1);
    cout<<endl;
    print1(n,n);

    return 0;

}