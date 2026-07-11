
#include<bits/stdc++.h>
using namespace std;

int f(int n)
{
    if(n<=1)
    {
        return n;
    }
    
   return f(n-1)+f(n-2);
    
}
int main() {
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<endl;
    
    for (int i = 0; i < n; i++) {
        cout << f(i) << " ";
    }
    return 0;
}