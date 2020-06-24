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
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        int odd = 0,even = 0;
        loop(i,n) {
            cin>>a[i];
            if(a[i]%2) {
                odd+=1;
            }
            else {
                even +=1;
            }

        }
        if(x == n) {
            if(odd%2) {
                cout<<"Yes"<<endl;
                continue;
            }
            else {
                cout<<"No"<<endl;
                continue;
            }
        }
        if(even == n) {
            cout<<"No"<<endl;
            continue;
        }
        if(odd == n) {
            if(x%2 == 1) {
                cout<<"Yes"<<endl;
                continue;
            }
            else {
                cout<<"No"<<endl;
                continue;
            }
        }

    }    
    return 0;
}
