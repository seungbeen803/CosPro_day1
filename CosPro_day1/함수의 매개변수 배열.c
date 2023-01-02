#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// p61 함수의 매개변수가 배열일 경우
// 1) 1차원 배열의 전달
// - 배열에 전달받을 함수는 매개변수를 포인터 변수로 선언
// - 배열을 전달하려는 경우는 길이를 전달

// p63 매개변수가 배열일 경우
int solution(int p[]) { // 포인터로도 사용 가능 -> int *p
	printf("p의 크기 %d\n", sizeof(p));
}
int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("arr의 크기 %d\n", sizeof(arr));
	solution(arr);
	return 0;
}