#include<bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long
#define pii pair<int,int>
#define all(x) begin(x), end(x)
#define loop(i,n) for(int i=0; i<n; i++)
#define rep(i,a,b,c) for(int i=a; i<b; i+=c)
#define brep(i,a,b,c) for(int i=a; i>b; i-=c)
#define tc(t) int t; cin>>t; while(t--)
#define sz(v) int((v).size())
#define pb push_back
#define ll long long


set<ll>s;
void precompute() {
    for(ll i = 1;i<=1e+9;i++) {
        int num = (3*i*i + i)/2;
        if(num>1e+9) {
            break;
        }
        s.insert(num);
    }
}
int main() {
    precompute();
    tc(t) {
        ll n;
        cin>>n;
        ll cnt = 0;
        // cout<<n<<endl;
        while(1) {
             if(n == 1|| n == 0) {
                    break;
                }
                auto temp = s.lower_bound(n); // [2,7,15,26]
                if(!s.count(n)) {
                    temp--;
                }
                int f = *temp;
                // cout<<f<<endl;
                n -= f;
                // cout<<n<<endl;
                // break;
                cnt+=1;
               
                // cout<<n<<endl;
        }
        cout<<cnt<<endl;
    }
 
    
}
