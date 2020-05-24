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
//Upsolve

/*
    I was thinking in the correct direction was not able to excute the problem in the right direction. Get the cnt of even and odd nos. if the cnt of even and odd are EVEN then they can be partitioned. if they are odd then they can be partitioned if one case has abs difference 1 then the cnt becomes even again and then can be partitioned.
    Else they cannot be partitioned
*/
int main() {
    tc(t) {
        int n;
        cin>>n;
        vector<int>a(n);
        int evencnt = 0 ,oddcnt = 0;
        loop(i,n) {
            cin>>a[i];
            if(a[i]%2) {
                oddcnt +=1;
            }
            else {
                evencnt+=1;
            }
        }
        // cout<<oddcnt<<" "<<evencnt<<endl;
        sort(all(a));
        int flag = 0;
        if(oddcnt%2 == evencnt%2) {
            if(oddcnt%2) {
                for(int i = 0;i<n-1;i++) {
                    if(abs(a[i]-a[i+1]) == 1) {
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag == 1 &&oddcnt%2) {
                cout<<"YES"<<endl;
                continue;
            }
            else if(flag == 0 && oddcnt%2) {
                cout<<"NO"<<endl;
                continue;
            }
            else if(oddcnt%2 == 0) {
                cout<<"YES"<<endl;
                continue;
            }
        }
        else {
            cout<<"NO"<<endl;
            continue;
        }
    }    
    return 0;
}
