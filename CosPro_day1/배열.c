#include <stdio.h>
void main() {
	//배열 선언과 크기 알아보기
	int arr[10]; //자료형 배열명[크기] -> 정적 배열
	// 배열의 크기는 : sizeof(배열명)
	printf("arr 배열의 크기 : %d \n", sizeof(arr));
	printf("arr 배열 요소의 크기 : %d \n", sizeof(arr[0]));
	printf("arr 배열의 길이 : %d \n", 10);
 }