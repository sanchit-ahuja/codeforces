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
        ll n;
        cin>>n;
        if(n == 1) {
            cout<<0<<endl;
            continue;
        }
        else if(n%3!=0) {
            cout<<-1<<endl;
            continue;
        }
        ll cnt = 0;
        if(n%3 == 0 && n%2) {
            cnt+=1;
            n = n*2;
        }
        int flag =0;
        while(1) {
            while(n%6 == 0) {
                cnt+=1;
                n = n/6;
            }
            // cout<<n<<endl;
            if(n == 1) {
                break;
            }
            if(n%3) {
                flag = 1;
                break;
            }
            else {
                cnt+=1;
                n = n*2;
            }
        }
        if(flag) {
            cout<<-1<<endl;
            continue;
        }
        cout<<cnt<<endl; 
    }
    return 0;
}
