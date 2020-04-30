#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x,y,aa,bb,ay,bx,mxa,mxb,mxt;
        cin>>a>>b>>x>>y;
        aa=a*(b-y-1);
        bb=b*(a-x-1);
        ay=a*y;
        bx=b*x;
        mxa=max(aa,ay);
        mxb=max(bb,bx);
        mxt=max(mxa,mxb);
        //cout<<aa<<" "<<bb<<".."<<ay<<" "<<bx<<endl;
        cout<<mxt<<endl;

    }
}
