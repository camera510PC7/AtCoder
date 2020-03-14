#include<stdio.h>
#include<stdlib.h>

int main(){
	int N,x[100000],y[100000],t[100000],flag,xy_sum[100000],t_temp,xy_temp;
	flag = 0;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d %d %d",&t[i],&x[i],&y[i]);
	}

	t_temp = 0;
	xy_temp = 0;
	for(int i=0;i<N;i++){
		xy_sum[i] =  x[i] + y[i];
		if((t[i] - t_temp) < abs(xy_temp - xy_sum[i])){
			flag = 1;
			break;
		}
		if((t[i] - t_temp - abs(xy_temp - xy_sum[i])) % 2 != 0){
			flag = 1;
			break;
		}
		t_temp = t[i];
		xy_temp = xy_sum[i];
	}

	if(flag == 0){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	return 0;
}
