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
        string s;
        cin>>s;
        int cnt_0 = 0,cnt_1 = 0;
        for(char x : s) {
            if(x == '0') {
                cnt_0+=1;
            }
            else {
                cnt_1 += 1;
            }
        }
        if(cnt_0 > cnt_1) {
            cnt_0 = cnt_0/2;
            if(cnt_0 > cnt_1) {
                
            }
        }
    }    
    return 0;
}
