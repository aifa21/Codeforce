#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
while(cin>>n)
{
int a[105];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
int b=0,c=0;
for(int i=0;i<n;i++)
{
if(a[i]>=0)
{
  b+=a[i];
}
else{
c+=a[i];
}
}
cout<<b-c<<endl;
}
return 0;
}
