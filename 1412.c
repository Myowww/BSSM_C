#include <stdio.h>
int main(){
    char sen[90]={};
    gets(sen);  
    // 배열에서 공백이나 특수문자 포함 문자열 입력
    
    for(int i=97; i<=122; i++){ 
    // 소문자 ASCII CODE a~z : 97~122
    
        int num=0;  // 몇 번 나왔는 지 셀 변수 생성성
    
        for(int j=0; sen[j]!='\n'; j++){    
            // j번째 문자가 \n이 아닐 때까지 반복
            
            if(sen[j]==i){  
            // 만약 sen 배열의 j번째 문자가 i(알파벳의 ASCII CODE)와 같다면
                
                num++; 
                // 횟수 증가
                
            }
            
        printf("%c:%d\n",i,num);
        // '알파벳 : 횟수' 출력
    }
    
    return 0;
}