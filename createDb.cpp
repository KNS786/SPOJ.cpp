#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int N,M;
	cin>>N>>M;
	int arr[N][M];
	for(int i=0;i<N;i++)
	  for(int j=0;j<M;j++)
		 cin>>arr[i][j];
	
	int glbl_val,g_val,in_val,in_cnt=1,out_cnt=1,yes=0;
	vector<int>res;
	
	  for(int i=0;i<N;i++){
	      int g=0,in=0;
	      glbl_val=arr[0][i];
	      for(int j=1;j<=M;j++){
	           if(glbl_val==arr[j][i]){
	               g_val=arr[j][i];
	               g++;
	           }
	           else{
	                in_val=arr[j][i];
	                in++;
	           }
	           
	      }
	      if(g > in ) {
	          yes=1;
	          res.push_back(g_val);
	      }
	      else if(g < in){
	          yes=1;
	          res.push_back(in_val);
	      }
	      else{
	          yes=0;
	      }
	 
	  }
	  if(yes){
	      
	      cout<<"YES"<<"\n";
	      for(int i=0;i<res.size();i++) 
	         cout<<res[i]<<" ";
	      
	  }else{
	      cout<<"NO"<<'\n';
	      
	  }
	   
	   
  return 0;
  
}