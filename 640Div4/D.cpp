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
       int i = 0,j = n-1;
       int cnt = 0;
       int alice = 0,bob = 0;
       int alicetot=0,bobtot = 0;
       while(i<=j) {
           if(cnt%2==0) {
               //alice turn
               int alicein = 0;
               while(i<=j && alicein<=bob) {
                   alicein+=a[i++];
               }
               alicetot+=alicein;
               alice = alicein;
           }
           else {
               int bobin = 0;
               while(i<=j &&bobin<=alice) {
                   bobin+=a[j--];
               }
               bobtot+=bobin;
               bob = bobin;
           }
           ++cnt;
       }
       cout<<cnt<<" "<<alicetot<<" "<<bobtot<<endl;
    }    
    return 0;
}
