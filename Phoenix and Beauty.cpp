#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,k;
    set<int>s;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        s.insert(a);
    }
     set<int>::iterator it1, it2;
    if(s.size()>k)
    {
        cout<<-1<<endl;
    }
    else if(s.size()==k)
    {
        cout<<n*k<<endl;
        for(int i=0;i<n;i++)
        {
             for (it1 = s.begin(); it1!=s.end();  ++it1) {
        cout << *it1 << " ";
             }

        }
        cout<<endl;
    }

    else
    {
        cout<<n*k<<endl;
        for(int i=0;i<n;i++)
        {
             for (it1 = s.begin(); it1!=s.end();  ++it1) {
        cout << *it1 << " ";
             }
             for(int j=0;j<k-s.size();j++){
            cout<<1<<' ';}
        }
        cout<<endl;
    }

}
return 0;
}
