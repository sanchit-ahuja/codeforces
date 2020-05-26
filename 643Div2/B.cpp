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
        loop(i,n)cin>>a[i];
        map<int,int>umap;
        loop(i,n)umap[a[i]]++;
        int cnt = 0;
        // for(auto x:umap) {
        //     cnt+=x.second/x.first;
        // }
        // cout<<cnt<<endl;
        sort(a.begin(),a.end());
        int curr= 0;
        loop(i,n) {
            curr++;
            if(a[i] == curr) {
                cnt++;
                curr = 0;
            }
        }
        cout<<cnt<<endl;
    }    
    return 0;
}
