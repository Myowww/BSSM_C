// 부산소프트웨어마이스터고등학교를 주제로 프로젝트 하나 만들기
// ★ 순환 알고리즘 / 구조체 / 포인터 / 스택 / 선형큐 / 원형큐 를 활용 ★


#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Student {
    int num;
    char name[10];
    bool att;
} STUDENT;

int main() {
    int s_n;
    scanf("%d", &s_n);

    struct Student s[s_n];

    for (int i = 0; i < s_n; i++) {
        int stu_num;
        char stu[10], attend;
        
        printf("학생의 학번, 이름, 출석 유무(y/n) 를 입력해주세요 : ");
        scanf("%d %9s %c", &stu_num, stu, &attend);

        s[i].num = stu_num;
        strcpy(s[i].name, stu);
        if (attend == 'y')
            s[i].att = true;
        else
            s[i].att = false;
    }
    
    printf("\n\n");
    
    for (int j = 0; j < s_n; j++) {

        if (s[j].att)
            printf("%d %s : 출석 완료\n", s[j].num, s[j].name);
        else
            printf("%d %s : 결석\n", s[j].num, s[j].name);
            
    }
}
