#include <stdio.h>

// �迭 ó��
// �հ�
// �ִ�/�ּ� (P28)
int main(void) {
	int a[10] = { 1, 2, -4, 56, 8, 89, 77, 23, 4, 22 };
	int max, maxpos;
	max = a[0]; // ù ��° �迭��
	maxpos = 0;

	for (int i = 0; i < 10; i++) {
		if (max < a[i]) {
			max = a[i];
			maxpos = i;
		}
	}
	printf("�ִ� : %d ��� ��ȣ : %d\n", max, maxpos);
}

