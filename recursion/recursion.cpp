#include<bits/stdc++.h>
using namespace std;

int cont=0;

void print()
{
    if(cont==2)
    {
        return;
    }
    cout<<cont<<" ";
    cont++;
    print();
}

int main()
{
    print();
    return 0;
}