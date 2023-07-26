#include <stdio.h>

typedef struct {
	int data[10];
	int top;
} Stack;

// 스택 초기화 함수
void init_stack(Stack *s)
{
    //(*s).top=-1;
	s->top = -1;
}
// 공백 상태 검출 함수
int is_empty(Stack *s)
{
	return (s->top == -1);
}
// 포화 상태 검출 함수
int is_full(Stack *s)
{
	return (s->top == 9);
}
// 삽입함수
void push(Stack *s, int item)
{
	if (is_full(s)) {
		printf("스택 가득참\n");
		exit(1);
	}
	else s->data[++(s->top)] = item;
}
// 삭제함수
int pop(Stack *s)
{
	if (is_empty(s)) {
		printf("스택 공백\n");
		exit(1);
	}
	else return s->data[(s->top)--];
}

int main(void)
{
	Stack jh;
	init_stack(&jh);
	push(&jh, 1);
	push(&jh, 2);
	push(&jh, 3);
	printf("%d\n", pop(&jh));
	printf("%d\n", pop(&jh));
	printf("%d\n", pop(&jh));
}
