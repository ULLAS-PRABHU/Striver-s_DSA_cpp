#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int hash[11]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }


    int q;
    cout<<"How many numbers to check: ";
    cin>>q;
    while(q--)
    {
        int numbers;
        cout<<"Enter which number";
        cin>>numbers;

        cout<<"Number of times "<<numbers<<"has repeated "<<hash[numbers];
    }
    return 0;
}