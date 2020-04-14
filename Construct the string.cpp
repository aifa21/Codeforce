#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   while(n--)
   {
       int a,b,c;
       cin>>a>>b>>c;
       string s="";
       int j=0;
       for(int i=0;i<a;i++)
       {
           if(j<c){
           s=s+char(j+'a');
          // cout<<s<<endl;
           j++;
       }
       if(j==c)
       {
           j=0;
       }
       }
       cout<<s<<endl;
   }
    return 0;
}
