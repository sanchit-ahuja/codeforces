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
        int n,k;
        cin>>n>>k;
        vector<ll>a(n);
        // map<int,int>umap;
        vector<ll>w(k);
        loop(i,n) {
            cin>>a[i];
            // umap[a[i]]++;
        }

        sort(all(a)); //taking in the integers in reverse order. Giving max to first k nos
        reverse(all(a));
        loop(i,k) {
            cin>>w[i];
        }
        sort(all(w));
        // reverse(all(w));
        ll ans = 0;
        ll ones = 0;
        for(int i = 0;i<k;i++) {
            ans += 1ll*a[i]; //giving the greatest to the greatest nos
            if(w[i] == 1) {
                ones++; //Corner case of 1
            }
            w[i]--; //subtracting the nos
        }
        loop(i,ones) {
            ans += a[i]; //Adding the top ones to the ans
        }
        
        int pos = k; //position for the with element in the sorted decreasing order array
        loop(i,k) {
            if(w[i] == 0) {
               continue; //Ones case already taken care off
            }
        pos += w[i]; //The minimum no located in the a array
        ans += a[pos-1];
        }
        cout<<ans<<endl;
    }    
    return 0;
}
