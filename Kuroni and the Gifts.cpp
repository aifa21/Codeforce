#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int a;
int ar[1009],b[1009];
cin>>a;
for(int i=0;i<a;i++)
{cin>>ar[i];}
for(int i=0;i<a;i++)
{cin>>b[i];}
sort(ar,ar+a);
sort(b,b+a);

for(int i=0;i<a;i++)
{cout<<ar[i]<<" ";}
cout<<endl;
for(int i=0;i<a;i++)
{cout<<b[i]<<" ";}
cout<<endl;
}
}
