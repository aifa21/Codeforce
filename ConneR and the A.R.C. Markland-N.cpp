
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    vector<int>v;
    map<int,int>mp;
 int n,s,k,p;
 cin>>n>>s>>k;
 for(int i=0;i<k;i++)
 {

     cin>>p;
     v.push_back(p);
     mp[p]=1;

 }
 int c=9999999999,c1;

 for(int i=s;i<=n;i++)
 {
     if(mp[i]==0)
     {
         c=min(c,abs(i-s));
         break;


     }
 }
 for(int i=s-1;i>=1;i--)
 {
     if(mp[i]==0)
     {
         c=min(c,abs(i-s));


     }
 }



 cout<<c<<endl;

    }
}
