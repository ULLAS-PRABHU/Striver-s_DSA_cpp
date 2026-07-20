#include<bits/stdc++.h>
using namespace std;

void func(int arr[],int n)
{
    vector<int> v(n,false);

    for(int i=0;i<n;i++)
    {
        if(v[i]==true)
        {
            continue;
        }

        int count=1;

        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                v[j]=true;

                count++;

            }
        }
        cout<<arr[i]<<" "<<count<<endl;
    }


}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    func(arr,n);

    return 0;
}