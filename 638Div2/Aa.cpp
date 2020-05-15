#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int suma = pow(2,n);
        for(int i = 1;i<=(n/2)-1;i++) {
            suma+=pow(2,i);
        }
        int sumb = 0;
        for(int i = (n/2);i<n;i++) {
            sumb+=pow(2,i);
        }
        cout<<abs(sumb-suma)<<endl;
    }   
}