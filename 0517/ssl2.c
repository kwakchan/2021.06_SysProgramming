#include <stdio.h>
#include <stdlib.h>

int main(){
  char c=0;
  while(1){
    printf("문자 입력: ");  
    scanf("%c", &c);
    
    if(c=='0') break;
    if(c >= 'A' && c <= 'Z'){
        printf("%c의 소문자는 %c입니다.\n", c, c+32);
    }else{
        printf("%c의 대문자는 %c입니다.\n", c, c-32);
    }
    getchar();
  }
  exit(0);
}
