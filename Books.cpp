#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,m,maximum=0,sum=0,ans=0,a,l=0,r=0,v[100000],temp=0;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    while(l<=n)
    {
        sum-=v[l++];

        while(r<=n && sum+v[r]<=m)
        {
            sum+=v[r];
            r++;
            ans=r-l;
           /// cout<<ans<<endl;
        }
        temp=max(temp,ans);


    }
    cout<<temp;

}
