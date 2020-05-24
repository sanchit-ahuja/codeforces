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
//Upsolve
int main() {
    tc(t) {
        int n,k;
        cin>>n>>k;
        int ans = -1;
        //Problem reduces to basically a*b = n, where a is number of shovels and b packages. Need to find the maximum divisor less than k. So if n/i where i is some divisor of n, is less than equal to k. We minimize ans = min(ans,i) and vice versa. DIVISOR PROBLEM
        for(int i = 1;i*i<=n;i++) {
            if(n%i == 0) {
                if(i<=k) {
                    ans = max(ans, i);
                }
                if(n/i<=k) {
                    ans = max(ans,n/i);
                }
            }
        }
        cout<<n/ans<<endl;
        continue;
    }    
    return 0;
}
