#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        vector<int>v;
        for(int i=d;i<n;i++)
            v.push_back(a[i]);
        for(int i=0;i<d;i++)    
            v.push_back(a[i]);
        for(int i=0;i<n;i++)
            cout<<v[i]<<" ";
        cout<<endl;    
    }
	return 0;
}