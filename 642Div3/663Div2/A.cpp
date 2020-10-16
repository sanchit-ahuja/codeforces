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
        int i = 1, j = n;
        int temp = 1;
        while(i<n) {
            a[i-1] = temp;
            a[i] = j;
            temp += 1;
            i+=2;
            j--;
        }
        if(a[n-1] == 0) {
            a[n-1] = (n/2)+1;
        }
        for(auto x : a) {
            cout<<x<<" ";
        }
        cout<<endl;
    }    
    return 0;
}
