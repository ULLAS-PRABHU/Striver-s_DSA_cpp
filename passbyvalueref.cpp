#include<bits/stdc++.h>
using namespace std;

void dosomething(int num)
{
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
int main()
{
    //pass by value

    int num=10;
    dosomething(num);

    cout<<num<<endl;  //only the copy of this num number go to the function so this prints 10
                        //the main value or data dosent change
    return 0;
}