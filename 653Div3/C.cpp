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
        
        stack<char>st;
        for(char x : s) {
            if(x == '(') {
                st.push(x);
            }
            else if(x == ')' && !st.empty()) {
                
                if(st.top() == '(') {
                    st.pop();
                    continue;
                }
                else {
                    st.push(')');
                }
            }
            else if(x == ')' && st.empty()) {
                st.push(x);
            }
        }
        int open = 0;
        int close = 0;
        while(!st.empty()) {
            if(st.top() == '(') {
                open+=1;
            }
            else {
                close+=1;
            }
            st.pop();
        }
        cout<<open<<endl;
    }    
    return 0;
}
