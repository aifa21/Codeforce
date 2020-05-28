
 #include <bits/stdc++.h>

using namespace std;

 int main()
{
       int t;
       cin>>t;
       while(t--)
       {
           int n;
           cin>>n;
           vector<int>v;
           int cnt=0,c,b;
           int tt=0;
           if(n>0&&n<10)
           {
               cnt++;
               v[tt]=n;
               tt++;
               cout<<cnt<<endl;
           }
          /* while(n>9)
           {
               cnt++;
               if(n>10000)
               {
                   c=n/10000;
                   n=n%10000;
                   v[tt]=c*10000;
                   tt++;

               }
              else if(n>1000)
               {
                   c=n/1000;
                   n=n%1000;
                    v[tt]=c*1000;
                    tt++;
               }
              else if(n>100)
               {
                  c=n/100;
                   n=n%100;
                    v[tt]=c*100;
                    tt++;
               }
              else if(n>10)
               {
                   c=n/10;
                   n=n%10;
                    v[tt]=c*10;
                    tt++;
               }
           }*/


           cout<<cnt<<endl;
           for(int i=0;i<v.size();i++)
           {
               cout<<v[i]<<" ";
           }
           cout<<endl;
           v.clear();
       }
       return 0;
}
