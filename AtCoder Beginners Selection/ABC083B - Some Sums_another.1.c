#include <stdio.h>

int main(){
   int n,a,b;
   scanf("%d %d %d",&n,&a,&b);
   
   int sum=0;
   int sum2=0;
   for(int i=1;n>=i;i++){
      int j=i;

      while(j>0){
         sum2+=j%10;
         j/=10;
      };
      
      if(sum2>=a&&sum2<=b){
         sum+=i;
      }
      sum2=0;
      
   }
   printf("%d",sum);
   return 0;
};