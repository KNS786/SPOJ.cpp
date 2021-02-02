#include<stdio.h>
void printD(int n)
{
  if(n>0){
   putchar('_');
   n=-n;
  }
  if(n/10)
  printD(n/10);
  putchar(n%10+'0');
}
int main(){
  int n;
  scanf("%d",&n);
  printD(n);
  return 0;
}

