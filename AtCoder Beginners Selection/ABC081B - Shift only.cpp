#include <stdio.h>

int count=0;

int DivisionDecision(int *c,int d){
   for (int e=0;e<d;e++){
      //偶奇判定
      if(c[e]%2==1){
         printf("%d",count);
         return 0;
      }
      c[e]=c[e]/2;
      
   }
   count++;
   
   DivisionDecision(c,d);
}

int main(){
   int n;
   scanf("%d",&n);
   
   int a[n];
   for(int b=0;b<n;b++){
      //数値代入
      scanf("%d",&a[b]);
   }
   
   DivisionDecision(a,n);
}