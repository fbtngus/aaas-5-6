#include <stdio.h>

int main()
{
	int value;
	printf("0~360 ������ ���� �Է��մϴ�: ");
	scanf_s("%d", &value, sizeof(int));

	if (value == 360 || value == 0) {
		printf("���� X�� \n\n");
	}
	else if (value < 90) {
		printf("1��и� \n");
	}
	else if (value == 90) {
		printf("���� Y�� \n");
	}
	else if (value < 180) {
		printf("2��и�\n");
	}
	else if (value == 180) {
		printf("���� X��\n");
	}
	else if (value < 270) {
		printf("3��и�\n");
	}
	else if (value == 270) {
		printf("���� Y��\n");
	}
	else if (value < 360) {
		printf("4��и�\n");
	}
	else {
		printf("������ ����� ���Դϴ�. (����) \n");
	}

	return 0;
}