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
        int odd = 0,even = 0;
        loop(i,n) {
            cin>>a[i];
            if(a[i]%2) {
                odd++;
            }
            else {
                even++;
            }
        }
        if((n%2 == 0 &&(odd!=even))|| (n%2 &&(even<odd)||abs(even-odd)>1)) {
            cout<<-1<<endl;
            continue;
        }
        int ans = 0;
        for(int i = 0;i<n;i++) {
            if(a[i]%2 &&i%2==0) {
                ans++;
            }
        }
        cout<<ans<<endl;
    }    
    return 0;
}
