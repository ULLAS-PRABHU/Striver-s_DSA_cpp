
#include<bits/stdc++.h>
using namespace std;

void f(int l,int r,int arr[],int n)
{
    if(l>r)
    {
        return;
    }
    
    swap(arr[l],arr[r]);
    f(l+1,r-1,arr,n);
}
int main() {
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    
    
    f(0,n-1,arr,n);
    cout<<"Elemest are: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    return 0;
}