#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ll int n,val;
    cin>>n;
     vector<ll int> v;
     for(ll int i=0;i<n;++i){
         cin>>val;
         v.push_back(val);
         
     }
     sort(v.begin(),v.end());
     
     for(auto it:v)
        cout<<it<<" ";
    return '\0';
    
    
}