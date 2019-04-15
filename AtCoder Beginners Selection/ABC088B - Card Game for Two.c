#include <stdio.h>
#include <stdlib.h>

int conpare(const void *a,const void *b){
   return *(int*)b-*(int*)a;   
}

int main(){
   int n;
   
   scanf("%d",&n);
   
   int a[n];
   for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   
   int alice=0;
   int bob=0;
   
   qsort(a,n,sizeof(int),conpare);

   for(int j=0;j<n;j++){
      if(j%2==0){
         alice+=a[j];
      }
      
      if(j%2==1){
         bob+=a[j];
      }
   }
   
   printf("%d",alice-bob);
   return 0;
}