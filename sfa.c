#include<stdio.h>
int fib(int n){
   int sum=0,prev=0,next=1,cnt=2;
   
     printf("%d %d ",prev,next);
     while( sum <=n){
         sum=prev+next;
         printf("%d ",sum);
         if( sum  > n){
             printf("Index pos : %d ",cnt);
             break;
         }
         prev=next;
         next=sum;
         cnt++;
     }
  
    
}

int main(){
    int n,res;
    scanf("%d",&n);
    fib(n);
}