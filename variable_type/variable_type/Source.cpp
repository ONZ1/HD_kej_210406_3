#include<stdio.h>

int main(void) {

	/*사용자로부터 원의 지름을 정수로 받아
	원의 둘레 길이, 원의 넓이 를 출력하는 프로그램을 만들으세요
	(PI = 3.141592이고, 원의 넓이 = PI * r * r, 원의 둘레 = PI * 2 * r 이다)*/
	float PI = 3.141592;
	int diameter = 0;

	printf("원의 지름이 될 정수를 입력해주세요:\n");
	scanf_s("%d", &diameter);

	float radius = diameter / 2;
	float area = PI * radius * radius;
	float round = PI * diameter;

	printf("원의 넓이: %.2f\n원의 둘레: %.2f\n", area, round);

	fgetc(stdin);
}
