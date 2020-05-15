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
        vector<int>temp;
        int cnt = 0;
        while(n) {
           int f = n%10;
           int p = pow(10,cnt);
           if(f*p!=0) {
           temp.push_back(f*p);
           }
           cnt+=1;
           n = n/10;
        }
        // temp.push_back(n);
        cout<<temp.size()<<endl;
        for(int num : temp) {
            cout<<num<<" ";
        }
        cout<<endl;
    }   
    return 0;
}
