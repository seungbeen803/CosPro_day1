#include <stdio.h>
void main() {
	//�迭 ����� ũ�� �˾ƺ���
	int arr[10]; //�ڷ��� �迭��[ũ��] -> ���� �迭
	// �迭�� ũ��� : sizeof(�迭��)
	printf("arr �迭�� ũ�� : %d \n", sizeof(arr));
	printf("arr �迭 ����� ũ�� : %d \n", sizeof(arr[0]));
	printf("arr �迭�� ���� : %d \n", 10);
 }