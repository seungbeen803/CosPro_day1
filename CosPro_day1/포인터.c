#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	// ������ ����
	int number = 5;
	int* ptr = &number; // number ������ �ּ� ���� ����Ŵ
	// *ptr = 10; // ������ ������ ���� ��� ���� ���� �� ����
	printf("number�� �� %d\n", number);
	*ptr = *ptr + 5;
	printf("number�� �� : %d\n", number);
}