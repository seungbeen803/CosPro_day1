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

	// 포인터 변수의 크기
	// ==> sizeof (포인터 변수) : 주소값 크기
	// sizeof(*포인터 변수) : 포인터 변수가 가리키고 있는 대상의 자료형

	// p45 포인터의 표현과 배열 표현
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* pArr;
	int i;
	pArr = &arr[0];
	for (i = 0; i < 10; i++) {
		printf("%p: %d\n", &arr[i], arr[i]);
	}

	for (i = 0; i < 10; i++) {
		printf("%p: %d\n", pArr + i, *(pArr + i));
		// 포인터변수 + 위치 : 위치에 해당하는 주소값
		// *(포인터변수 + 위치) : 위치에 해당하는 값을 리턴
	}

}