#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// p61 �Լ��� �Ű������� �迭�� ���
// 1) 1���� �迭�� ����
// - �迭�� ���޹��� �Լ��� �Ű������� ������ ������ ����
// - �迭�� �����Ϸ��� ���� ���̸� ����

// p63 �Ű������� �迭�� ���
int solution(int p[]) { // �����ͷε� ��� ���� -> int *p
	printf("p�� ũ�� %d\n", sizeof(p));
}
int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("arr�� ũ�� %d\n", sizeof(arr));
	solution(arr);
	return 0;
}