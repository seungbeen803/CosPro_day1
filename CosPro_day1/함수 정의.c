#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 함수의 매개변수 전달
// 1> 값에 의한 전달 ==> 값을 복사하고 전달 ==> 매개변수 일반형
int Add(int x, int y) {
	return x + y;
}

int main(void) {
	int x = 5, y = 7, z;
	z = Add(x, y);
	printf("%d\n", z);
	printf("%d, %d\n", x, y);
}