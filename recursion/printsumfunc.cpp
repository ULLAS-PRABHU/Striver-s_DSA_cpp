#include<bits/stdc++.h>
using namespace std;

int printsum(int n)
{
    if(n==0)
    {
        return 0;
    }

    return n+printsum(n-1);                                                         //functional recursion 
                                            //n+ something 


}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<endl;
    int s=printsum(n);
    cout<<s;
    return 0;

}