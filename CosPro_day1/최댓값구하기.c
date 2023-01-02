#include <stdio.h>

// 배열 처리
// 합계
// 최대/최소 (P28)
int main(void) {
	int a[10] = { 1, 2, -4, 56, 8, 89, 77, 23, 4, 22 };
	int max, maxpos;
	max = a[0]; // 첫 번째 배열값
	maxpos = 0;

	for (int i = 0; i < 10; i++) {
		if (max < a[i]) {
			max = a[i];
			maxpos = i;
		}
	}
	printf("최댓값 : %d 요소 번호 : %d\n", max, maxpos);
}

