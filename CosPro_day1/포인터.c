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

	// ������ ������ ũ��
	// ==> sizeof (������ ����) : �ּҰ� ũ��
	// sizeof(*������ ����) : ������ ������ ����Ű�� �ִ� ����� �ڷ���

	// p45 �������� ǥ���� �迭 ǥ��
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* pArr;
	int i;
	pArr = &arr[0];
	for (i = 0; i < 10; i++) {
		printf("%p: %d\n", &arr[i], arr[i]);
	}

	for (i = 0; i < 10; i++) {
		printf("%p: %d\n", pArr + i, *(pArr + i));
		// �����ͺ��� + ��ġ : ��ġ�� �ش��ϴ� �ּҰ�
		// *(�����ͺ��� + ��ġ) : ��ġ�� �ش��ϴ� ���� ����
	}

}