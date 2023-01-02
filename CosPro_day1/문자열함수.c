#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	// p31 문자열 ==> 문자열 끝에 null값 들어옴 => string.h헤더 파일 필요
	// 문자열 처리 함수
	// 1> 문자열 길이 : strlen
	// 2> 문자열 복사 : strcpy
	// 3> 문자열 비교 : strcmp
	// 4> 문자열 덧붙이기 : strcat
	// 5> 문자열 결합 : strconcat

	char s1[100] = "대한민국 파이팅";
	char s2[100];
	char s3[100];
	
	printf("문자열 길이 : %d\n", strlen(s1));

	strcpy(s2, s1);
	printf("문자열 복사 : %s\n", s2);

	strcat(s2, s1); // s1 + s2
	printf("%s\n", s2);

	// 같으면 : 0, 다르면 : 0이 아닌 값
	// string1 < string2 : -1, 반대: +1
	printf("%d\n", strcmp("school", "boy")); 
}