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
        int n;
        cin>>n;
        vector<int>a(n,0);
        map<int,int>umap;
        loop(i,n) {
            int k;
            cin>>k;
            a[i] = k;
            umap[k]++;
            // cin>>umap[]
        }
        sort(all(a));
        int temp = 0;
        for(auto x : umap) {
            if(x.second>1) {
               temp = 1;
               break;
            }
        }
        if(temp == 1) {
            cout<<0<<endl;
            continue;
        }
        else {
            int ans = INT_MAX;
            for(int i = 0;i<n-1;i++) {
                ans = min(ans,a[i+1]-a[i]);
            }
            cout<<ans<<endl;
            continue;
        }
        
        // sort(all(a));

    }
    return 0;
}
