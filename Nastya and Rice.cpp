#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
long long int n,a,b,c,d,cd,dc,ab,ba,na,nb;
cin>>n>>a>>b>>c>>d;
ab=a-b;
ba=a+b;
cd=c-d;
dc=c+d;
na=n*ab;
nb=n*ba;

if((na>=cd&&na<=dc)||(nb>=cd&&nb<=dc)||(na<=cd &&dc<=nb))
{
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
    }
    return 0;
}
