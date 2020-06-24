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
        set<int>r;
        set<int>c;
        vector<vector<int>>v(n,vector<int>(m,0));
        loop(i,n) {
            loop(j,m) {
                cin>>v[i][j];
                if(v[i][j] == 1) {
                    r.insert(i);
                    c.insert(j);
                }
            }
        }
        int mn = min(n-(int)r.size(),m-(int)c.size());
        if(mn%2) {
            cout<<"Ashish"<<endl;
        }
        else {
            cout<<"Vivek"<<endl;
        }
    }    
    return 0;
}
