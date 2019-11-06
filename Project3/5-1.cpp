#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input1, input2, max, min;
	printf("두 정수를 입력하세요: ");
	scanf("%d%d", &input1, &input2);
	max = (input1 > input2) ? input1 : input2;
	min = (input1 > input2) ? input2 : input1;

	printf("큰 수를 작은수로 나눈 몫은     %d\n", max / min);
	printf("큰 수를 작은수로 나눈 나머지는 %d\n", max % min);

	return 0;
}
