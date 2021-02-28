#include<bits/stdc++.h>
using namespace std;

int DKM(num){
	int ptr,temp=num,k,cnt=0;
	if(num & 1 ){
		ptr=3;
		while(ptr){
			if(num % ptr==0){
			    for(k=num;k>1;k--){
					cnt++;
				}
				break;
			}
			ptr+=2;
		}
		
	}else{
		ptr=2;
		while(ptr){
			if(num % ptr==0)
			{
				for(k=num;k>1;k--){
					cnt++;
				}
				break;
			}
			ptr+=2;
		}
		
	}
	return cnt;
}


int main(){
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
	   int num,cnt=0;
	   cin>>num;
	  if(num ==1) cout<<0<<'\n';
	  else cout<<DKM(num)<<'\n';
   }   
}