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
        ll n,m;
        cin>>n>>m;
        if(n == 1) {
            cout<<0<<endl;
        }
        else if(n ==2) {
            cout<<m<<endl;
        }
        else {
            cout<<2*m<<endl;
        }
        // cout<<25/2<<endl;
    }
    return 0;
}
