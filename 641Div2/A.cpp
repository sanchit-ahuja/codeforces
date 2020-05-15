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
ll precompute[int(1e+6)+1];
set<ll>s;
void sieve(int n){
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(int p=2;p*p<=n;p++){
        if(prime[p]==true){
            precompute[p] = p;
            for(int i=p*p;i<=n;i+=p){
                precompute[i] = p;
                prime[i]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==true){
            s.insert(i);
            precompute[i] = i;
        }
    }

}

int main() {
    tc(t) {
        ll n,k;
        cin>>n>>k;
        sieve(1e+6);
        // for(int i = 0;i<(1e+6);i++) {
        //     if(precompute[i] == 0) {
        //         cout<<i<<endl;
        //     }
        //     // cout<<precompute[5]<<'f'<<endl;
        // }
        // cout<<precompute[5]<<'f'<<endl;
        ll f = n;
        ll pr = 0;
        {
            for(auto x: s) {
                if(f%x == 0) {
                    pr = x;
                    break;
                }
            }
        }
        if(k == 1) {
            cout<<pr + n<<endl;
        }
        else {
            cout<<(pr+n) + 2*(k-1)<<endl;
        }


    }
    return 0;
}
