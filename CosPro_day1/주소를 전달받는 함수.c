#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// p59 �ּҸ� ���޹޴� �Լ�
void swap(int* pa, int* pb) {
	int a = *pa;
	int b = *pb;
	*pa = b;
	*pb = a; // ���� ��ȯ
}

int main() {
	int a = 5, b = 8;
	printf("�Լ� ȣ�� �� : %d, %d \n", a, b);
	swap(&a, &b);
	printf("�Լ� ȣ�� �� : %d, %d \n", a, b);
}