#include<bits/stdc++.h>
using namespace std;

int printsum(int i,int sum)
{
    if(i<1)
    {
        return sum;
    }

 printsum(i-1,sum+i);
 
}
int main()
{
    int i;
    cout<<"Enter the n: ";
    cin>>i;

    cout<<endl;

    int s=printsum(i,0);
    cout<<s;
    return 0;
}