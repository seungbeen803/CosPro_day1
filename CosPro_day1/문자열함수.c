#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	// p31 ���ڿ� ==> ���ڿ� ���� null�� ���� => string.h��� ���� �ʿ�
	// ���ڿ� ó�� �Լ�
	// 1> ���ڿ� ���� : strlen
	// 2> ���ڿ� ���� : strcpy
	// 3> ���ڿ� �� : strcmp
	// 4> ���ڿ� �����̱� : strcat
	// 5> ���ڿ� ���� : strconcat

	char s1[100] = "���ѹα� ������";
	char s2[100];
	char s3[100];
	
	printf("���ڿ� ���� : %d\n", strlen(s1));

	strcpy(s2, s1);
	printf("���ڿ� ���� : %s\n", s2);

	strcat(s2, s1); // s1 + s2
	printf("%s\n", s2);

	// ������ : 0, �ٸ��� : 0�� �ƴ� ��
	// string1 < string2 : -1, �ݴ�: +1
	printf("%d\n", strcmp("school", "boy")); 
}