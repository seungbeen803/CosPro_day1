#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // �����Ҵ� �Լ��� ����ϱ� ���� �������

void main() {
	int* pInt;
	pInt = (int*)malloc(sizeof(int));

	*pInt = 4;
	printf("%d\n", pInt);

	free(pInt); // �޸� ����
}