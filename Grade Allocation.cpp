#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,a[100007];
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int s=0,mx=0;
        for(int i=0;i<n;i++)
        {
            s+=a[i];

        }



            cout<<min(s,m)<<endl;



    }

}
