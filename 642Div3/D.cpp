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
        vector<int>a(n,0);
        //Sarthak's soln
        auto cmp = [](pair<int,int>a,pair<int,int>b) {
            int diff1 = a.second - a.first;
            int diff2 = b.second - b.first;
            if(diff1 == diff2) {
                return a.first > b.first;
            }
            return diff1<diff2;
        };
        /*
            Things learnt: 1. Comparator function how to write.
            2. Don't cry on a single problem
            3. Doable.
        */
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(cmp);
        pq.push({0,n-1});
        int k = 1;
        while(k!=n+1) {
            pii temp = pq.top();
            pq.pop();
            int l = temp.first;
            int r = temp.second;
            int m = l + (r-l)/2;
            if(a[m]!=0) continue;
            a[m] = k;
            pq.push({l,m-1});
            pq.push({m+1,r});
            k++;
               }
        loop(i,n) cout<<a[i]<<' ';
        cout<<'\n';    
    }
    return 0;
}
