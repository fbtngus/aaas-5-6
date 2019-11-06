
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	float input1, input2, result;
	int op;
	printf("두 실수 입력: ");
	scanf("%f%f", &input1, &input2);
	printf("연산종류 번호선택 1<+>, 2<->, 3<*>, 4</>: ");
	scanf("%d", &op);

	switch (op) {
	case 1:
		result = input1 + input2;
		printf("%f + %f = %f\n", input1, input2, result);
		break;
	case 2:
		result = input1 - input2;
		printf("%f - %f = %f\n", input1, input2, result);
		break;
	case 3:
		result = input1 * input2;
		printf("%f * %f = %f\n", input1, input2, result);
		break;
	case 4:
		result = input1 / input2;
		printf("%f / %f = %f\n", input1, input2, result);
		break;
	default:
		printf("번호를 잘못 선택했습니다.\n");
		break;
	}
	return 0;
}


