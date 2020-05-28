
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[1007];
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int mn=99999;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
        {

            mn=min(mn,abs(a[i]-a[j]));
        }
        }
        cout<<mn<<endl;
    }
    return 0;
}
