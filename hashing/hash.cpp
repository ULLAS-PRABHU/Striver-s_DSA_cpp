#include<bits/stdc++.h>
using namespace std;


//time cpmplexity is O(q*n)   {because q is the numbers to check and n is the actual size of the array(the amount of time the loop runs)}
// for each number we are running the loop n times

//we cannot allocate memor more than 10^6 an if we o then it will throw segemtation fault

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int hash[n+1]={0};
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