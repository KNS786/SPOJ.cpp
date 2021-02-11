#include<bits/stdc++.h>
using namespace std;

int Solve(int arr[],int N){
   
    for(int i=0;i<N;i++){
	    sum=arr[i]+arr[i+1];
	    int j=i+2;
		if(sum==arr[j]){
		   cnt++;
		}
		else{
		    int left=i-1,right=j++;
			if(left==sum || right==sum){
			    cnt++;
				break;
			}
			if(left < i ){
			     while(left>=i){
				   if(sum==arr[left]) cnt++;
				   left--;
				 }
				 
			}
			else if(right< N){
			   while(right<=N){
			      if(sum==arr[right]) cnt++;
				  right++;
			   }
			}
		}
		
	}
}