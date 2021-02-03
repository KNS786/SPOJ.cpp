#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(char str[],int first,int end){
      str[first] ^= str[end];
      str[end] ^=str[first];
      str[first] ^= str[end];
}


void reverse(char str[],int len){

    if(len & 1){
        int mid=len/2;
        for(int i=0;i<len;i++){
            if(i==mid) break;
            swap(str,i,len-(i+1));
            
        }
    }
    else 
    for(int i=0;i<len/2;i++){
         swap(str,i,len-(i+1));
    }
    
}

int _atoi(char str[],int len){
    int num=0;
     for(int i=0;i<len;i++){
           num=num*10+str[i]-'0';     
     } 
    return num;
}


void _itoa(char str[],int num){
    
    int n=num,rem=0,len=0;
    while(n !=0){
        ++len;
        n/=10;
    }
    
    for(int i=0;i<len;i++){
        rem=num % 10;
        num=num / 10;
        str[len-(i+1)]=rem+'0';
        
    }
    str[len]='\0';
  
  
}



int main(){
    int T;
    scanf("%d",&T);
    int a,b,c1,c2,f=0,k;
    while(T--){
        scanf("%d%d",&a,&b);
        char str1[10],str2[10],res[10];
        _itoa(str1,a);
        _itoa(str2,b);
        reverse(str1,(int)strlen(str1));
        reverse(str2,(int)strlen(str2));
        c1=_atoi(str1,(int)strlen(str1));
        c2=_atoi(str2,(int)strlen(str2));
        f=c1+c2;
        _itoa(res,f);
        reverse(res,(int)strlen(res));
        k=_atoi(res,(int)strlen(res));
        printf("%d ",k);
        
        
    }
    return 0;
    
}