#include<stdio.h>

int main(void) {

	/*����ڷκ��� ���� ������ ������ �޾�
	���� �ѷ� ����, ���� ���� �� ����ϴ� ���α׷��� ����������
	(PI = 3.141592�̰�, ���� ���� = PI * r * r, ���� �ѷ� = PI * 2 * r �̴�)*/
	float PI = 3.141592;
	int diameter = 0;

	printf("���� ������ �� ������ �Է����ּ���:\n");
	scanf_s("%d", &diameter);

	float radius = diameter / 2;
	float area = PI * radius * radius;
	float round = PI * diameter;

	printf("���� ����: %.2f\n���� �ѷ�: %.2f\n", area, round);

	fgetc(stdin);
}
