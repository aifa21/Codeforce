#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int n;
         cin>>n;
         vector<long long int>v;
         for(int i=1;i<=n;i++)
         {
             int p=pow(2,i);
             //cout<<p<<endl;

             v.push_back(p);

         }

       long long  int d=(n/2)-2;
       long long int a=0,b=0;
         for(int i=0;i<=d;i++)
         {
             a+=v[i];
           //  cout<<a<<endl;
         }
         a=a+v[n-1];
        //cout<<"."<<a<<endl;
         for(int i=d+1;i<v.size()-1;i++)
         {
             b+=v[i];
         }

//  cout<<a<<".."<<b<<endl;
  cout<<abs(a-b)<<endl;
    }
    return 0;
}

