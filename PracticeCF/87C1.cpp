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
double pi  =3.14159265358979323846;
int main() {
    tc(t) {
        int n;
        cin>>n;

        // cout<<(double)M_PI<<endl;
        float angle = (2*pi)/(2.0*n);
        angle = angle/2;
        cout<<setprecision(12)<<1/tan(angle)<<endl;
        // cout<<angle<<endl;
        // cout<<<<endl;
    }    
    return 0;
}
