#include<stdio.h>
//시간 더하기 프로그램




// 전역변수 
int hour; //시간
int minute; //분
int minuteAdd; //추가할 분


//함수는  반환형(void) 함수이름(counter) 매개변수(()) 로 구성되어 있다
//함수의 반환값이 없을경우 void를 사용한다
void counter()
{
	minute += minuteAdd;
	hour += minute / 60;
	minute %= 60;
	hour %= 24;
}

int main()
{
	printf("시를 입력하세요 : ");
	scanf("%d", &hour);
	printf("분을 입력하세요 : "); 
	scanf("%d", &minute);
	printf("더할 분을 입력하세요 : ");
	scanf("%d", &minuteAdd);
	counter();
	printf("더해진 시간은 : %d시 %d분 입니다\n", hour, minute );

			
}
