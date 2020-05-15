#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--) {
        int n,k,flag;
        cin>>n>>k;
        vector<int>temp(n);
        for(int i = 0;i<n;i++) {
            cin>>temp[i];
        }
        int window = 0;
        for(int i = 0;i<k;i++) {
            window += temp[i];  // Sum of the first k 
        }

        int mini = window;
        int maxi = window;
        // cout<<window<<'w';
        int temp_sum = 0;
        for(int i = k;i<n;i++) {
            temp_sum += window - temp[i-k] + temp[i];
            mini = min(temp_sum,mini);
            maxi = max(temp_sum,maxi);
        }
        if(mini<n) {
            flag = 1;
        }

    }   
}