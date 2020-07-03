#include<bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define pii pair<int,int>
#define all(x) begin(x), end(x)
#define loop(i,n) for(int i=0; i<n; i++)
#define rep(i,a,b,c) for(int i=a; i<b; i+=c)
#define brep(i,a,b,c) for(int i=a; i>b; i-=c)
#define tc(t) int t; cin>>t; while(t--)
#define sz(v) int((v).size())
#define pb push_back

int main() {

    tc(t) {
        ll n,k;
        cin>>n>>k;
        // vector<ll>a(n);
        map<ll,ll>umap;
        loop(i,n) {
            ll temp;
            cin>>temp;
            temp = temp%k;
            if(temp) {
                umap[k-temp]++;
            }
        }
    ll mx = 0;
    for(auto x:umap) {  
        ll temp = x.first + (x.second-1ll)*k;
        mx = max(mx,temp);
    }
    if(mx) {
        mx++;
    }
    cout<<mx<<endl;
    }    
    return 0;
}
