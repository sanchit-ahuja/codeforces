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
        loop(i,n) {
            cin>>a[i];
        }
        if(a.size() == 1) {
            cout<<"YES"<<endl;
            continue;
        }
        sort(all(a));
        int flag = 0;
        for(int i = 0;i<n-1;i++) {
            if(a[i+1]-a[i]>1) {
                flag = 1;
                break;
            }
        }
        if(flag) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
