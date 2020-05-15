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
    int n;
    cin>>n;
    vector<int> arr1(n);
    loop(i,n) {
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    vector<int>arr2(m);
    // int arr2[m];
    loop(i,m) {
        cin>>arr2[i];
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    int cnt = 0;
    for(int i = 0;i<n;i++) {
        for(int j = 0;j<m;j++) {
            if(abs(arr2[j]-arr1[i])<=1) {
                arr2[j] = 1000;
                cnt+=1;
                break;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
