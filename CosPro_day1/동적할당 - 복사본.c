#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // 동적할당 함수를 사용하기 위한 헤더파일

void main() {
	int* pInt;
	pInt = (int*)malloc(sizeof(int));

	*pInt = 4;
	printf("%d\n", pInt);

	free(pInt); // 메모리 해제
}