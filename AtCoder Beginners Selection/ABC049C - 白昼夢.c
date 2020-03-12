#include<stdio.h>
#include<string.h>

void reverse(char *S){
	char a,temp,b;
	for(int i=0;i<=(strlen(S)-1)/2;i++){
		a = S[i];
		temp = S[strlen(S)-i-1];
		S[i] = temp;
		S[strlen(S)-i-1] = a;
	}
}

int main(){
	char S[100000];
	char *q;
	char dream[] = "dream";
	char dreamer[] = "dreamer";
	char erase[] = "erase";
	char eraser[] = "eraser";
	int len,flag;
	scanf("%s",&S);
	len = 0;
	reverse(S);
	reverse(dream);
	reverse(dreamer);
	reverse(erase);
	reverse(eraser);
	
	flag = 0;
	q = S;

	while(1){
		if(memcmp(q+len,dream,5) == 0){
			len += 5;
		}else{
			flag++;
		}
		if(memcmp(q+len,dreamer,7) == 0){
			len += 7;
		}else{
			flag++;
		}
		if(memcmp(q+len,erase,5) == 0){
			len += 5;
		}else{
			flag++;
		}
		if(memcmp(q+len,eraser,6) == 0){
			len += 6;
		}else{
			flag++;
		}
		
		if(flag<4){
			flag = 0;
		}else{
			break;
		}
	}
	if(strlen(S) == len ){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	return 0;
}

