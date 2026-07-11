#include<bits/stdc++.h>
using namespace std;

//time complexity - O(n/2) - space complexity

//two pointers approach (start,end) (left,right)


bool f(int i,string &s)
{
    if(i>=s.size()/2) return true;

    if(s[i]!=s[s.size()-i-1]) return false;

    return f(i+1,s);
}
int main()
{
    string s="madam";
    cout<<f(0,s);
    return 0;
}