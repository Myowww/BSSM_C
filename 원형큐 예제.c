#include <stdio.h>
#include <stdlib.h>
typedef struct { // 큐 타입
	int  data[5];
	int  front, rear;
} Queue;

// 큐 초기화 함수
void init_queue(Queue *q)
{
	q->front = q->rear = 0;
	// 프론트와 레어가 0이다
}

// 공백 상태 검출 함수
int is_empty(Queue *q)
{
	return (q->front == q->rear);
	// 프론트와 레어가 같음을 반환
}

// 포화 상태 검출 함수
int is_full(Queue *q)
{
	return ((q->rear + 1) % 5 == q->front);
	// 레어값에 1을 더한 값을 5로 나눈 나머지가 프론트값과 같다면 포화 상태
}

// 원형큐 출력 함수
void queue_print(Queue *q)
{
	printf("QUEUE(front=%d rear=%d) = ", q->front, q->rear);
	// QUEUE(front=(프론트값) rear=(레어값)) 출력
	
	// 만약 큐가 비어있지 않다면
	if (!is_empty(q)) {
	    
		int i = q->front;
		// 프론트값을 가진 변수 i 생성
		
		do {
			i = (i + 1) % (5);
			// i는 (i+1)을 5로 나눈 나머지.
			
			printf("%d | ", q->data[i]);
			// 데이터의 i번째 값 출력
			
			// 만약 i가 레어값과 같다면 끝내기
			if (i == q->rear)
				break;
		} 
		
		// i가 프론트값이 아닌 동안 실행
		while (i != q->front);
		
	}
	printf("\n");
}

// 삽입 함수
void enqueue(Queue *q, int item)
{
	if (is_full(q))
    {
		printf("큐가 포화상태입니다");
		exit(1);
    }
	q->rear = (q->rear + 1) % 5;
	q->data[q->rear] = item;
}

// 삭제 함수
int dequeue(Queue *q)
{
	if (is_empty(q))
    {
		printf("큐가 공백상태입니다");
		exit(1);
    }
	q->front = (q->front + 1) % 5;
	return q->data[q->front];
}

// ===== 원형큐 코드 끝 ======

int main(void)
{
	Queue jh;

	init_queue(&jh);

	enqueue(&jh, 10);
	enqueue(&jh, 20);
	enqueue(&jh, 30);
	queue_print(&jh);

	dequeue(&jh);
	dequeue(&jh);
	dequeue(&jh);
	queue_print(&jh);
	return 0;
}
