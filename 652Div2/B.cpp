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
        string s;
        cin>>s;
        int flag = 1;
        loop(i,n) {
            if(s[i]<s[i-1]) {
                flag = 0;
                break;
            }
        }
        if(flag) {
            cout<<s<<endl;
            continue;
        }
        int x = 0,y = n-1;
        while(s[x] == '0' && x<n) x++; //got preceding 0s
        while(s[y] == '1' && y>=0) y--; //got trailing 1s

        string ans = "";
        loop(i,x) {
            ans.push_back('0');
        } 
        ans.push_back('0');
        loop(i,n-y-1) {
            ans.push_back('1');
        }
        cout<<ans<<endl;
    }    
    return 0;
}
