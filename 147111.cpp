#include<bits/stdc++.h>
using namespace std;

int dublicates(vector<int>a){
    if(a.size()  == 1) return 1;
    else if(a.size()==2 ) return  a[0]==a[1] ? 1 : 2;
    else {
      set<int>s;
       for(int i=0;i<a.size();i++) s.insert(a[i]);
       return s.size();
       
       
    }
    
}


int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++) cin>>arr[i];
    
    vector<int>a0,a1;

    int i=0,j=1;
    
    while(j<=N && i < j){
        
        if(arr[i] == arr[j])
            a0.push_back(arr[j]);
        else
            a1.push_back(arr[i]);
            
        ++i;
        ++j;
        
    }
   
    
    cout<<dublicates(a0)+dublicates(a1)<<endl;
    
    
}