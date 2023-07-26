#include <stdio.h>

int main() {
    char sen[90] = {};

    fgets(sen, sizeof(sen), stdin);
    // 배열에서 공백이나 특수문자를 포함한 문자열 입력
    // 버퍼 오버플로우를 방지하기 위해 fgets 사용 (fgets는 공백이나 특수문자까지 다 받는 scanf라고 생각하면 됨)

    for (int i = 'a'; i <= 'z'; i++) {
        int num = 0; // 문자 발생 횟수를 세는 변수

        for (int j = 0; sen[j] != '\0'; j++) {
            if (sen[j] == i) {
            // 만약 sen 배열의 j번째 문자가 i(알파벳의 ASCII CODE)와 같다면
                num++; // 발생 횟수 증가
            }
        }

        if (num >= 0) {
            printf("%c:%d\n", i, num);
        // '알파벳 : 횟수' 출력
        }
    }

    return 0;
}
