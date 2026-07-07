#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="hello";
    int len=s.size();
    s[len -1]='z';          //should assign with '' it is a character
    cout<<s[len -1];
    cout<<s[0];

    return 0;
}