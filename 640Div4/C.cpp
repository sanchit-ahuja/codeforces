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
        ll cnt = 1;
        ll ans;
        // if(k%n == 0) {
        //     ans = (k/n) + k;
        //     // 1000000000
        //     // 1000000000
        // }
        if(k<=n) {
            if(k == n) {
                ans = k +1;
            }
            else {
                ans = k;
            }
            cout<<ans<<endl;
        } 
        else {
            // ll nums = ((k/n) + 1);
            // ll temp = (n-1)*(nums); //-->84th num gives 97
            ll fg = k/(n-1);
            // cout<<fg<<endl;
            // ll temp = ((n-1)*fg); //-->96
            // cout<<temp<<endl;
            ll p = k%(n-1) == 0?-1:k%(n-1);
            ll mul = fg*n + p;
            ans = mul;
            // if(ans%n == 0) {
            //     ans+=1;
            // }
            cout<<ans<<endl;
            // cout<<ans<<endl;
    }
    }
    return 0;
}
