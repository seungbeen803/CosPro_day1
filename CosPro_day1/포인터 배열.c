#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	// 포인터 배열 : 포인터 변수들의 배열
	char* pStr[4] = { "red", "green", "blue", "gray" }; // const를 붙이면 문자열을 상수로 만들어줌
	printf("0번 문자열 값 : %s\n", pStr[0]);
	printf("1번 문자열 값 : %s\n", pStr[1]);
}