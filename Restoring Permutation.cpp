#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int b[1005],a[1005];
        map<int,int>mp,mp1;
        int n;
        cin>>n;

        // memset(a,0,sizeof a);
        for(int i=1;i<=n;i++)
        {

            cin>>b[i];
            a[2*i-1]=b[i];
            mp[b[i]]=1;

        }
        int x,ff=0;

        for(int i=1;i<=n;i++)
        {
             int f=0;
            x=a[2*i-1]+1;

            while(1){
                    if(f==1)
                    {
                        break;
                    }
            if(mp[x]==0){
                    f=1;

            a[i*2]=x;
            mp[x]=1;
            }
            else{
                x++;
            }
            }
            if(x>2*n){
                    ff=1;
                break;
            }
        }

        if(ff==1)
        {
            cout<<"-1"<<endl;
        }
        else{
        for(int i=1;i<=2*n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        }

    }
}
