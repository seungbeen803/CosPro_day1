#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// �Լ��� �Ű����� ����
// 1> ���� ���� ���� ==> ���� �����ϰ� ���� ==> �Ű����� �Ϲ���
int Add(int x, int y) {
	return x + y;
}

int main(void) {
	int x = 5, y = 7, z;
	z = Add(x, y);
	printf("%d\n", z);
	printf("%d, %d\n", x, y);
}