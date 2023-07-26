#include <stdio.h>

char str[30];

typedef struct {
	char data[30];
	int top;
} StackType;


// 스택 초기화 함수
void init_stack(StackType *s){
	s->top = -1;
}

// 공백 상태 검출 함수
int is_empty(StackType *s){
	return (s->top == -1);
}

// 포화 상태 검출 함수
int is_full(StackType *s){
	return (s->top == 29);
}

// 삽입함수
void push(StackType *s, int item)
{
	if (is_full(s)) {
		printf("스택 가득참\n");
		exit(1);
	}
	else s->data[++(s->top)] = item;
	}

// 삭제함수
int pop(StackType *s){
	if (is_empty(s)) {
		printf("스택 공백\n");
		exit(1);
	}
	else return s->data[(s->top)--];
}

int main(void){
	
	StackType s;
	init_stack(&s);
	
	scanf("%s",str);
	
	// 괄호의 개수만큼 반복
	for(int i=0; i<strlen(str); i++){
		
		// 만약 '(' 이 입력되었다면
		if(str[i]=='('){
			
			push(&s,str[i]);
			// 스택에 추가
			
		} 
		
		// 아니면 ( ')'이 입력되었다면 )
		else{
			
			// 만약 스택이 비어있다면 NO 출력
			if(is_empty(&s)){
				printf("NO");
				return 0;
			}
			
			pop(&s);
			// '()' 로 한 쌍이 완성되기 때문에 그 쌍을 제거
			
		}
		
	}
	
	// 만약 스택이 비지 않았다면 (제대로 된 괄호쌍들은 다 제거되었기 때문에 괄호가 남았다면 아니라고 출력해야 함)
	if(!is_empty(&s)){
		
		printf("NO");
		// NO 출력
		
	} 

	// 아니면 ( 문제가 없다면 )
	else {
		
		printf("YES");
		// YES 출력
		
	}
	
	return 0;
}
