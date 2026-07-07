#include<bits/stdc++.h>
using namespace std;

//it changes the actual value or original value of a variable or data

void dosomething(string &s)  //it takes the address of the original 
{
    s[0]='s';
    cout<<s<<endl;
}

int main()
{
    string s="Ullas";
    dosomething(s);
    cout<<s<<endl;  //prints sllas because it has changed originally not only the copy

    return 0;
}

//arrays always is passed by reference 
//if we change something in array it is changes directly in the main array not a copy