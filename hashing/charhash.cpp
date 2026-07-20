#include<bits/stdc++.h>
using namespace std;


//use ascii 
//for character abce... (is onl 26 so it is finite)

//alwas use arras for character hashing because onl 256 characters

//also if we want onl lower case then char-'a' an for onl uppercase char-'A' an for all characters inclue all 256

int main()
{
    string arr;
    cin>>arr;

    //pre compute

    int hash[256]={0};
    for(int i=0;i<arr.size();i++)
    {
        hash[arr[i]-'\0']++;
    }

    int q;
    cout<<"How many numbers to check: ";
    cin>>q;
    while(q--)
    {
        char c;
        cout<<"Enter which character: ";
        cin>>c;
        
        //fetching
        cout<<"Number of times "<<c<<"has repeated "<<hash[c-'\0'];
    }
    return 0;
}