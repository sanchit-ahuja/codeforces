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
// Main idea was to figure out that res variable is tracking the number of times the inner loop runs
//After that we needed to figure out the usage of curr and map to 
    IOS
    tc(t) {
        
        string s;
        cin>>s;
        unordered_map<ll,int>umap;
        ll temp = 0;
        ll ans =0;
        for(int i = 0;i<s.size();i++) {
            if(s[i] == '-') {
                temp--; //curr variable in the pseudo-code given
            }
            else if(s[i] == '+') {
                temp++;
            }
            if(temp<0 && umap[temp] == false) {
                ans += (i+1);
                umap[temp] = true;
            }
        }
        ans += s.size();
        cout<<ans<<endl;

    }
    return 0;
}
