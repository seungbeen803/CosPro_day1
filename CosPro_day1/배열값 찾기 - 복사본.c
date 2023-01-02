#include <stdio.h>

// 배열 처리
// 합계
// 최대/최소 (P28)
int main(void) {
	// 배열값 찾기 ==> if(찾고자하는 키 == 배열명[위치])

	// 배열의 복사 ==> 복사대상배열명[] = 복사원본배열명
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int cpy_arr[10];
	for (int i = 0; i < 10; i++) {
		cpy_arr[i] = arr[i];
	}
}

