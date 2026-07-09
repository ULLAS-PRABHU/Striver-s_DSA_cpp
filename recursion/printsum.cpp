#include<bits/stdc++.h>
using namespace std;

void printsum(int i,int sum)
{
    if(i<1)
    {
        cout<<sum;
        return;
    }

 printsum(i-1,sum+i);
 
}
int main()
{
    int i;
    cout<<"Enter the n: ";
    cin>>i;

    cout<<endl;

    printsum(i,0);
    
    return 0;
}