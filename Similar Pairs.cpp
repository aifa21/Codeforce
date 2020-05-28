#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[109];
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ne=0,no=0;
        int f=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                ne++;
            }
            else{
                no++;
            }

        }

        if(ne==n||no==n)
        {
            f=1;
        }
        else if(ne%2==0&&no%2==0)
        {
            f=1;
        }
        else if(ne%2!=0&&no%2!=0)
        {
            for(int i=0;i<n-1;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(abs(a[i]-a[j])==1)
                    {
                        f=1;
                        break;
                    }
                }
                if(f==1)
                {
                    break;
                }
            }
        }
        if(f==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
