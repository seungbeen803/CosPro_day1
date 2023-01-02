#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int isTimeOfTwo(int n) {
	return (n % 2 == 0) ? 1 : 0;
}

int main() {
	if (isTimeOfTwo(10) == 1)
		printf("2의 배수 ");
	else
		printf("2의 배수아님");
}