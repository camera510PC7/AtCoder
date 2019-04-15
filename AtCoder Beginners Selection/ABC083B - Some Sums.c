#include <stdio.h>
     
int main(){
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    
    int i[]={0,0,0,0,0};
    int sum=0;
    for(int j=0;j<n;j++){
       i[4]++;
       
      if(i[4]>9){
          i[4]=0;
          i[3]++;
       };
      if(i[3]>9){
          i[3]=0;
          i[2]++;
       };
      if(i[2]>9){
         i[2]=0;
         i[1]++;
      };
      if(i[1]>9){
         i[1]=0;
         i[0]++;
      };
       
      if(i[0]+i[1]+i[2]+i[3]+i[4]>=a&&i[0]+i[1]+i[2]+i[3]+i[4]<=b){
         sum=sum+(i[0]*10000+i[1]*1000+i[2]*100+i[3]*10+i[4]);
      };
    };
    
   printf("%d",sum);
   return 0;
};