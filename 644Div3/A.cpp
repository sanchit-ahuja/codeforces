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
        int a,b;
        cin>>a>>b;
        if(a == b) {
            cout<<(2*a)*(2*a)<<endl;
            continue;
        }
        else {
            // int m = 0,n = 0;
            // if(a > b) {
            //     m = b;
            // }
            int m = min(a,b);
            if(m == b) {
                if(2*b >= a) {
                    cout<<2*b*2*b<<endl;
                    continue;
                }
                else {
                    cout<<(a)*(a)<<endl;
                }
            }
            else if(m == a) {
                if(2*a>=b) {
                    cout<<4*a*a<<endl;
                }
                else {
                    cout<<(b)*(b)<<endl;
                }
            }
            
            
        }
    }
    return 0;
}
