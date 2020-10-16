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
        vector<ll>a(n);
        vector<ll>b(n);
        loop(i,n) {
            cin>>a[i];
        }
        loop(i,n) {
            cin>>b[i];
        }

        ll min_a = *min_element(all(a));
        ll min_b = *min_element(all(b));
        ll cnt = 0;
        loop(i,n) {
            int a_1 = a[i] - min_a;
            int b_1 = b[i] - min_b;
            cnt += max(a_1,b_1); 
        }
        cout<<cnt<<endl;
    }    
    return 0;
}
