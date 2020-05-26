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
     
    // ll a[2000000] = {0};
    vector<ll>a(200002,0);
    vector<ll>b(200002,0);
     
    int main() {
        ll n,k,q;
        cin>>n>>k>>q;
        while(n--) {
            ll l1,l2;
            cin>>l1>>l2;
            a[l1]++,a[l2+1]--;
        }
       
        for(int i = 1;i<200002;i++) {
            a[i]+=a[i-1];
            // a[i]=a[i-1];
        }
        for(int i = 1;i<200002;i++) {
            if(a[i]>=k) {
                a[i] = 1;
            }
            else {
                a[i] = 0;
            }
        }
        for(int i = 1;i<200002;i++) {
            a[i] +=a[i-1];
        }
        while(q--) {
            ll l1,l2;
            cin>>l1>>l2;
            cout<<a[l2]-a[l1-1]<<endl;
        }
     
        return 0;
    }

/*
    This is basically a trick to solve multi query problems without Segment trees
*/