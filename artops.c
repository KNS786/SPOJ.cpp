#include<stdio.h>
#include<stdlib.h>

long long int len(char c[]){
    int i;
    for(i=0;c[i]!='\0';i++) ;
  return i;
}



long long int _atoi(char c[],long long int start,long long int end){
    int num=0;
     for(long long int i=start;i<end;i++){
         num=num*10+c[i]-'0';
     }
    return num;
}
long long int make_Sign(long long int n,char * c){
    for(long long int i=0;i<n;i++)
      printf("%c",*c);
      
    
}
long long int PLUS(long long int n1,long long int n2,long long int s,long long int e){
    
    if(s > e){
        make_Sign((long long int)s-e," ");
           printf(" %lld",n1);
           
        printf("\n");
        printf("+%lld",n2);
        printf("\n");
        
        make_Sign(e,"_");
        printf("\n");
        printf("%lld",n1+n2);
        
        
    }else{
        // for(long long int i=0;i<s-e;i++)
           
           printf("%lld",n1);
          printf("\n");
          printf("+%lld",n2);
          printf("\n");
           make_Sign((long long int)e,"_");
        printf("\n");
        printf("%lld",n1+n2);
        
    }
}

long long int MINUS(long long int n1,long long int n2,long long int a,long long int e){
      
           make_Sign((long long int)a-e," ");
           printf("%lld",n1);
           printf("\n");
           printf("-%lld",n2);
           make_Sign((long long int )e,"_");
           printf("\n");
           printf("%lld",n1-n2);
           
    
}
long long int MULTIPLY(long long int n1,long long int n2,long long int a,long long int e){
           make_Sign((long long int)a-e," ");
           printf("%lld",n1);
           printf("\n");
           printf("*%lld",n2);
           printf("\n");
           make_Sign((long long int )e,"_");
           printf("\n");
           printf("%lld",n1*n2);
           
      
}

long long int DIVIDE(long long int n1,long long int n2,long long int a,long long int e){
     double d;
     
           make_Sign((long long int)a-e," ");
           printf("%lld",n1);
           printf("\n");
           printf("/%lld\n",n2);
           make_Sign((long long int)e,"_");
           printf("\n");
           d=(double)n1/n2;
           printf("%lf",d);
           
}


long long STRING_IDENTIFY(char c[],long long int length){
    
      long long int i,n1,n2,res;
      long long int _plus,_minus,_multiply,_divide;
      _plus=_minus=_multiply=_divide=0;
      
      for(i=0;i<length;i++){
          
            if(c[i]=='+') {_plus=1;n1=_atoi(c,0,i);break;}
            else if(c[i]=='-'){_minus=1;n1=_atoi(c,0,i);break;}
            else if(c[i]=='*'){_multiply=1;n1=_atoi(c,0,i);break;}
            else if(c[i]=='/'){_divide=1;n1=_atoi(c,0,i);break;}
            
      }
      n2=_atoi(c,i+1,length);

      
      printf("\n");
   
     if(_plus)           PLUS(n1,n2,i,length-i+1);
     else if (_minus)    MINUS(n1,n2,i,length-i+1);
     else if(_multiply)  MULTIPLY(n1,n2,i,length-i+1);
     else if(_divide)    DIVIDE(n1,n2,i,length-i+1);
   

   
}

int main(){
    
    long long int T;
    scanf("%lld",&T);
    while(T-- > 0){
     char c[100];
     scanf("%s",c);
     
     STRING_IDENTIFY(c,len(c));
     printf("\n");
     
   }
    return 0;
    
}