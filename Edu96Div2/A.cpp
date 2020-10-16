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
        if(n<3) {
            cout<< -1 <<endl;
            continue;
        }
        else if(n == 4) {
            cout<< -1 <<endl;
            continue;
        }
        else if(n%3 == 0) {
            cout<<to_string(n/3) + " " + "0" + " " + "0"<<endl;
            continue;
        }
        else if(n%5 == 0) {
            cout<<"0 "+ to_string(n/5) + " " + "0"<<endl;
            continue;
        }
        else if(n%7 == 0) {
            // string temp = "0 " + "0 " + to_string(n/7); 
            // cout<<temp<endl;
            cout<<"0 0 "+ to_string(n/7)<<endl;
            continue;
        }
        // 3 -5 
        int cnt_3 = 0, cnt_5 = 0,cnt_7 = 0;
        int temp = n;
        int flag = 0;
        while(temp>0) {
            temp -= 3;
            cnt_3 += 1;
            if(temp % 5 ==0) {
                flag = 1;
                break;
            }
        }
        if(flag == 1) {
            cout<<to_string(cnt_3) + ' ' + to_string(temp/5) + ' ' + '0'<<endl;
            continue;
        }

        cnt_3 = 0;
        temp = n;
        flag = 0;
        while(temp>0) {
            temp -= 3;
            cnt_3 += 1;
            if(temp % 7 ==0) {
                flag = 1;
                break;
            }
        }
        if(flag == 1) {
            cout<<to_string(cnt_3) + ' ' + "0 " + to_string(temp/7)<<endl;
            continue;
        }

        cnt_5 = 0,cnt_7 = 0;
        temp = n;
        flag = 0;
        while(temp>0) {
            temp -= 5;
            cnt_5 += 1;
            if(temp % 7 ==0) {
                flag = 1;
                break;
            }
        }
        if(flag == 1) {
            cout<<"0 " + to_string(cnt_5) + ' ' + to_string(temp/7)<<endl;
            continue;
        }
    }
    
    return 0;
}
