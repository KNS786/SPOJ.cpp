#include<stdio.h>
#include<stdlib.h>
#define ll long long

ll int MIN(ll int a,ll int c){
   return   a < c ? a :c ;
}



int main(){
    
    ll int n,m,res;
    scanf("%lld%lld",&n,&m);
    ll int unrepairedRoad=m,t, k=0,unpacked=0,milkManPresentRoad[n],
       * road_visited=(ll int*)malloc(1024*sizeof(int)), j, u,v,c;
       
    for(ll int i=0;i<n;i++){
        scanf("%lld",&milkManPresentRoad[i]);
    }
   
    for(ll int i=0;i<unrepairedRoad;i++){
        scanf("%lld%lld%lld",&u,&v,&c);
        for( j=1;j<=u;j++){
            road_visited[j]=j;
        }
        for( k=v;k<=n;k++){
            if(u!=v) road_visited[k]=k;
        }
    
      for(ll int s=1;s<k+j;s++){
          if(road_visited[s] == milkManPresentRoad[s-1])
             res++;
      }
       unpacked=(ll int)MIN(res,c);
       
     
    }
    //#define assert.Error(unpacked==0)
 
     if(unpacked < 0) printf("IMPOSSIBLE\n");
     else if(unpacked==0) printf("%lld",((res/2)/c));
     else  printf("%lld\n",unpacked);
     
 
    return '\0';
}
