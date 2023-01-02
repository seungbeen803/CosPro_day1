#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	// 포인터 변수
	int number = 5;
	int* ptr = &number; // number 변수의 주소 값을 가리킴
	// *ptr = 10; // 포인터 변수의 직접 상수 값을 넣을 수 없다
	printf("number의 값 %d\n", number);
	*ptr = *ptr + 5;
	printf("number의 값 : %d\n", number);
}