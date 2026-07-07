#include<bits/stdc++.h>
using namespace std;

void printname(string name)
    {
        cout<<"Ullas"<<name<<endl;
    }

int sum(int a,int b)
{
    return a+b;
}

int main()
{
    //functions are set of code which performs something for you 
    //functions are used to modularized code- divide functions based on a particular thing that it does
    //functions are used to increase readability
    //functions are used to use same code multiple times

    //void-> which does not return anything
    //return->
    //parameterized->
    //non parameterized->
    string name;
    cout<<"Enter the name: ";
    cin>>name;
    printname(name);
    //printname1();
    
    int a,b;
    cout<<"Enter the 2 num";
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
    return 0;
    
}