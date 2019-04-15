#include <stdio.h>

int main(){
    char s[100];
    int count=0;
    scanf("%s", s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='1'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}