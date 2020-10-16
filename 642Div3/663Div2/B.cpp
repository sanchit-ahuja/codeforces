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
        int n,m;
        cin>>n>>m;
        // vector<vector<char>>a(n,vector<char>(m,''));
        // vector<vector<string>>a(n,vector<string>(m,'f'));
        vector<string>a(n,string("",m));
        vector<pair<int,int>>coord;
        loop(i,n) {
            loop(j,m) {
                cin>>a[i][j];
                if(a[i][j] =='C') {
                    continue;
                }
                else {
                    coord.pb({i,j});
                }
            }
        }

        
       
    }    
    return 0;
}
