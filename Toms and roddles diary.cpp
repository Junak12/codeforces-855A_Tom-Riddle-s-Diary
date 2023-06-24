#include<bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n';
int main()
{
    int n;
    cin>>n;
    map<string,int>m;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]++;
        if(m[s]==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
