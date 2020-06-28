
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        set<long long int>st;
        int n;
        cin>>n;
       long long int m;

        for(int i=0;i<n;i++)
        {
            cin>>m;

            st.insert(m);
        }
       cout<<st.size()<<endl;
    }
}
