#include<bits/stdc++.h>
using namespace std;

int countofdigits(int n)
{
    
    int count=0;
    while(n>0)
    {
        
        n=n/10;
        count++;
    }

    return count;
}

int reversenum(int n)
{
    int revnum=0;

    while(n>0)
    {
        int last=n%10;
        n=n/10;

        revnum=(revnum*10)+last;
        
    }
    return revnum;
}

bool palinrome(int n)
{
    int rev=0;
    int num=n;
    while(n>0)
    {
        int lasti=n%10;
        n=n/10;

        rev=(rev*10)+lasti;
        if(num==rev)                           //dont use n because it changes after n=n/10;
        {
            return true;
        }
    }
        return false;
    
}

bool armstrongs(int x)
{
    int sum=0;
    int count=0;
    int num=x,a=x;
    if(x==0)
        return true;
    while(a>0)
    {
        a=a/10;
        count++;
    }
    while(x>0)
    {
        int lastd=x%10;
        sum=sum+round((pow(lastd,count)));
        x=x/10;
        
    }
    
    if(sum==num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void divisors(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
}

void divisors1(int n)
{
    vector<int> vec;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            vec.push_back(i);
            if((n/i)!=i)
        {
            vec.push_back(n/i);
        }

        }
        
    }

    sort(vec.begin(),vec.end());
    for(auto it:vec)
    {
        cout<<it<<" ";
    }
}

void checkprime(int n)
{
    int count=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
            if((n/i)!=i)
            {
                count++;
            }
        }
    }
    if(count==2)
    {
        cout<<"Prime"<<endl;
    }
    else
    {
        cout<<"Not prime"<<endl;
    }
}

void gcd(int n1,int n2)
{
    while(n1>0 && n2>0)
    {
        if(n1>n2)
        {
            n1=n1%n2;
        }
        else
        {
            n2=n2%n1;
        }
    }
    if(n1==0)
    { 
        cout<<n2<<" is the gcd";
    }
    else 
    {
        cout<<n1<<" is the gcd";
    }
}
int main()
{
    int n;
    cout<<"Enter the digit : ";
    cin>>n;

    cout<<"The number of digits is = "<<countofdigits(n);
    cout<<endl;
    cout<<"The reverse of the number is = "<<reversenum(n);

    cout<<endl;

    if(palinrome(n))
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"Not a palindrome";
    }

    cout<<endl;

    if(armstrongs(n))
    {cout<<"armstrong";} else{cout<<"NOT armstrong";}

    cout<<endl<<endl;

    divisors(n);
    cout<<endl;
     divisors1(n);

     cout<<endl;
     checkprime(n);

     cout<<endl;
     int n1,n2;
     cout<<"enter two numbers: ";
     cin>>n1>>n2;
     gcd(n1,n2);
    return 0;
}