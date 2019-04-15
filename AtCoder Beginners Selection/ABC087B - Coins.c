#include <stdio.h>

int main(){
   int a;
   int b;
   int c;
   int x;

   int count=0;
   
   scanf("%d %d %d %d",&a,&b,&c,&x);
   
   int Fifty;
   int OneHdr1;
   int OneHdr2;
   int FiveHdr;
   
   
   for(Fifty=x/50,OneHdr1=0;Fifty>=0;Fifty=Fifty-2,OneHdr1++){
      for(int OneHdr2=OneHdr1,FiveHdr=0;OneHdr2>=0;OneHdr2=OneHdr2-5,FiveHdr++){
         if(Fifty<=c && OneHdr2<=b && FiveHdr<=a){
            count++;
         }
      }
   }
   
   
   printf("%d",count);
   return 0;
}