#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}

int main(){
    int N;
    scanf("%d",&N);
    
    int d[N];

    for(int i=0;i<N;i++){
        scanf("%d",&d[i]);
    }

    int count=1;

    qsort(d,N,sizeof(int),compare_int);

    for(int j=0;j+1<N;j++){
        if(d[j]!=d[j+1]){
            count++;
        }
    }

    printf("%d",count);

    return 0;
}
