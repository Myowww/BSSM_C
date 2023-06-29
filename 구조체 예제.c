#include<stdio.h>

typedef struct student{
    int no;      // 학번
    int inf;     // 정보 점수
    int mat;     // 수학 점수
    int sum;     // 합계 점수
    double avg;  // 평균 점수
}STUDENT;
// STUDENT 라는 이름의 struct 생성

int main()
{
    int n;
    scanf("%d",&n);
    // 학생 정보를 받는 횟수를 받는 변수 n 

    STUDENT s[n];
    // STUDENT 의 s라는 배열 생성

    for(int i=0; i<n; i++){
        scanf("%d %d %d", &s[i].no, &s[i].inf, &s[i].mat);
        // 학생의 학번, 정보 점수, 수학 점수를 받음

        s[i].sum = s[i].inf + s[i].mat;
        // 합계

        s[i].avg = s[i].sum/2.0;
        // 평균
        
    }

    for(int i=0; i<n; i++){
        printf("%d %d %.1f\n", s[i].no, s[i].sum, s[i].avg);
        // 학번, 합계, 평균을 n번만큼 출력
    }
    
}
