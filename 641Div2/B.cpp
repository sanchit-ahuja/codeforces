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
        vector<int>s(n+1);
        for(int i = 1;i<=n;i++) {
            cin>>s[i];
        }
        vector<int>dp(n+1,1);
        for(int i = 1;i<=n;i++) {
            // dp[i] = 1;
            for(int j = 2*i;j<=n;j+=i) {
                if(s[j]>s[i]) {
                    dp[j] = max(dp[i]+1,dp[j]); //EXACTLY LIKE LIS!!!
                }
            }
        }
        cout<< *max_element(dp.begin(),dp.end())<<endl;
    }    
    return 0;
}
