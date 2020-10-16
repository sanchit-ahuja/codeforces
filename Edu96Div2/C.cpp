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
        cout<<2<<endl;
        if(n == 2) {
            cout<<1<<' '<<2<<endl;
            continue;
        }
        cout<<n-2<<" "<<n<<endl;
        cout<<n-1<<" "<<n-1<<endl;
        int num = n-1;
        n -=3;
        // cout<<n<<endl;
        if(n == 0) continue;
        while(n > 0) {
            cout<<num<<" "<<n<<endl;
            num = (num+n)/2;
            n-=1;
        }
    }
    return 0;
}
