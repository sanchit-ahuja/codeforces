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
        vector<int>a(n);
        loop(i,n) {
            cin>>a[i];
        }
        if(n == 1) {
            cout<<0<<endl;
            continue;
        }
        sort(all(a));
        int ans = -1;
        for(int i = 2;i<=100;i++) {
            int cnt = 0;
            int l = 0, r = n-1;
            while(l<r) {
                if(a[l]+ a[r] == i) {
                    cnt++;
                    l++;
                    r--;
                }
                else if(a[l]+ a[r]<i) {
                    l++;
                }
                else {
                    r--;
                }
                ans = max(ans, cnt);
            }
        }
        cout<<ans<<endl;
    }    
    return 0;
}
