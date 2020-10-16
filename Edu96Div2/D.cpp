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
        string s;
        cin>>s;
        vector<int>seg;
        int i = 0;
        while(i<n) {
            int cnt = 1;
            while(i+1<n && s[i] == s[i+1]) {
                i++;
                ++cnt;
            }
            seg.pb(cnt);
            i++;
        }
        // loop(i,seg.size()) {
        //     cout<<seg[i]<<' ';
        // }
        i = 0;
        int pt = 0;
        int ans=  0;
        n = seg.size();
        while(i<n) {
            while(pt<n) {
                if(seg[pt]>1) {
                    --seg[pt];
                    break;
                }
                ++pt;
            }

            if(pt == n) ++i; // normal all 1s case
            while(pt<=i) ++pt; //remove the prefix now
            i++;
            ++ans;
            
        }

        cout<<ans<<endl;
    }
    return 0;
}
