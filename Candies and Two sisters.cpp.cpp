#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long int m;
        cin>>m;

        if(m%2==0)
        {
            cout<<(m/2)-1<<endl;
        }

        else{
            cout<<m/2<<endl;
        }
    }
    return 0;
}
