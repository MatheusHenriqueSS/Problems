#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define sz(x) (int)x.size()
#define int long long
typedef pair<int,int>pii;
const int mxN=2e5+5,M=1e9+7;
//did u check when n=1?
//is mxN correct?
int n,ans,tot,ma;
int v[mxN],pref[mxN];
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
        tot+=v[i];
        ma=max(ma,v[i]);
    }
    if(n==1)cout<<2*tot;
    else if(ma>tot-ma)cout<<2*ma;
    else cout<<tot;


}