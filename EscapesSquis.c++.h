#include<bits/stdc++.h>
using namespace std ;
class  Solution{
  public:
vector<int>Solve(vector<int>&arr,int n){
    int sum=0;
    int j;
    for(j=0;j<n;j++){
        sum=sum*10+arr[j];
    }
   
    sum++;
    
    int rem;
    int res[n];
    int o=0,k=0;
    while(sum > 0){
        rem=sum%10;
        
      res[k]=o*10+rem;
        sum/=10;
         ++k;
    }
    
   vector<int>sk(k);
   for(int i=0;i<k;i++) cout<<res[i]<<" ";
   
   return sk;
   
}
    
    
};
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     
    int N,val;
    cin>>N;
    vector<int>arr(N);
    for(int i=0;i<N;i++){
      cin>>val;
      arr.push_back(val);
      
    }
    Solution s;
    vector<int>res=s.Solve(arr,N);
    for(int j=0;j<res.size();j++)
      cout<<res[j]<<" ";
    
    return 0;
    
    
}