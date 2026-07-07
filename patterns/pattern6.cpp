
#include<bits/stdc++.h>
using namespace std;
void prints(int n)
{
    for(int i=0;i<n;i++)        //for one ith loop one full j loop till n gets completed
    {
        for(int j=0;j<i;j++)
        {   
            cout<<" ";
           
        }
         for(int k=0;k<(2*n-(2*i+1));k++)
            {
                cout<<"*";
                
            }
            for(int l=0;l<i;l++)
                {
                    cout<<" ";
                }
        cout<<"\n";
    }
}


void prints1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }

        for(int k=0;k<2*i+1;k++)
        {
            cout<<"*";
        }
         for(int l=0;l<n-i-1;l++)
         {
            cout<<" ";
         }
         cout<<"\n";
    }

}

void prints2(int n)
{
    for(int i=1;i<=2*n-1;i++)
    {
        int stars=i;
        if(i>n)
        {
            stars=2*n-i;
        }

        for(int j=1;j<=stars;j++)
         {
            cout<<"*";
         }
        
        cout<<"\n";

        
    }
}

void prints3(int n)
{   
    int start=1;
    for(int i=0;i<n;i++)
    {
        
        if(i%2==0)
        {
            start=1;
        }
        else
        {
            start=0;
        }
        for(int j=0;j<=i;j++)
        {
            cout<<start;
            start=1-start;
        }
        cout<<"\n";
    }
}

void prints4(int n)
{
     int space=2*(n-1);
    for(int i=1;i<=n;i++)
    {
       
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        
        for(int k=1;k<=space;k++)
        {
            cout<<" ";
        }

        for(int l=i;l>=1;l--)
        {
            cout<<l;
        }
        cout<<"\n";
        space-=2;
    }
}

void prints5(int n)
{
    int num=1;
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<=i;j++)
        {
            cout<<num;
            cout<<" ";
            num+=1;
        }
        cout<<endl;
    }
}

void prints6(int n)
{
    char c='A';
    for(int i=0;i<n;i++)
    {
        for(char ch='A';ch<='A'+i;ch++)
        {
            cout<<ch;
            
        }
        
        cout<<endl;
    }
}

void prints7(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char j='A';j<'A'+n-i-1;j++)
        {
            cout<<j;
            
        }
        cout<<"\n";
    }
}

void prints8(int n)
{
    char ch='A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<ch;
            
        }
        ch+=1;
        cout<<"\n";
    }

}

void prints9(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
       
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(char j=0;j<2*i+1;j++)
        {
            cout<<ch;
            if(j<breakpoint)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }

        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }

        cout<<"\n";
    }
}

void prints10(int n)
{
    
    
    for(int i=0;i<n;i++)
    {
        for(char j='E'-i;j<='E';j++)
        {
            cout<<j;
            
        }
        

        cout<<endl;
    }
}

void prints11(int n)
{
    int inis=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        
        for(int j=0;j<inis;j++)
        {
            cout<<" ";
        }

        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        inis+=2;
        cout<<endl;
    }

    inis=2*n-2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }

        for(int j=0;j<inis;j++)
        {
            cout<<" ";
        }

        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        inis-=2;
        cout<<endl;
    }

    


}

void prints12(int n)
{
    for(int i=0;i<2*n-1;i++)
    {
        int stars=i;
        for(int j=)
    }
}

int main()
{
    
    int t;
    cout<<"How many times: ";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n=5;
       // prints1(n);
        //prints(n);
        //prints2(n);
        //prints3(n);
        prints11(n);
        
    }
    return 0;
}