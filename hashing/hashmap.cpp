#include<bits/stdc++.h>
using namespace std;

//map stores all the values in sorted order
//based on the key value like 1 then 2 then 100 and so on

//time complexity - 

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //pre_compute
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }

    //iterate in the map
    for(auto it:mpp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    int q;
    cin>>q;

    while(q--)
    {
        int number;
        cin>>number;

        //fetch

        cout<<mpp[number];

    }
    return 0;
}