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
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        vector<int>b(n);
        loop(i,n) {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        loop(i,n) {
            cin>>b[i];
        }
        sort(b.begin(),b.end());
        int mx = accumulate(a.begin(),a.end(),0);
        int i = 0,j = n-1;
        while(k--) {
            swap(a[i],b[j]);
            int f = accumulate(a.begin(),a.end(),0);
            mx = max(mx,f);
            i+=1;
            j-=1;
        }
        cout<<mx<<endl;
    }
    return 0;
}
