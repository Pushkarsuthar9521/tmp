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
        map<string,int>mp;

        string s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            mp[s[i]]++;
        }
       

        for(auto x : mp){
            cout<<x.first<<" "<<x.second<<endl;
        }

    }
}