#include <stdio.h>

int n;

long long int d[110];

long long int f(){
  long long int temp = d[1];
  // temp 라는 제일 작은 변수를 설정한다
  
  for(int i = 1; i<=n; i++){  // n번만큼 반복
        if(d[i]<temp){temp = d[i];}
        // temp가 d[i]보다 작으면 temp를 d[i]로 지정 
    }
  return temp;  // temp 값을 반환한다
}

int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%lld", &d[i]);

  printf("%lld", f());
  return 0;
}
