#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	// ������ �迭 : ������ �������� �迭
	char* pStr[4] = { "red", "green", "blue", "gray" }; // const�� ���̸� ���ڿ��� ����� �������
	printf("0�� ���ڿ� �� : %s\n", pStr[0]);
	printf("1�� ���ڿ� �� : %s\n", pStr[1]);
}