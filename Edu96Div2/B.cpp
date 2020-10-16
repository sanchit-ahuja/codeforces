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
        loop(i,n) {
            cin>>a[i];
        }
        sort(all(a));
        // int i = 0,j = n-1;
        for(int i = n-2;i>=0;i--){
            if(a[i] == 0) continue;
            if(k>0) {
                a[n-1]+=a[i];
                k--;
            }
        }
        cout<<a[n-1]<<endl;
    }
    return 0;
}
