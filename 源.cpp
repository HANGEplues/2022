#include<stdio.h>
int calculate(int Height1, int Height2);
int main()
{
	int m_Height1;
	int m_Height2;
	int result;

	printf("请输入父亲的身高（cm）\n");
	scanf_s("%d", &m_Height1);

	printf("请输入母亲的身高（cm）\n");
	scanf_s("%d", &m_Height2);

	result = calculate(m_Height1, m_Height2);
	printf("孩子的身高是：\n");
	printf("%d", result);
	printf("cm");
	return 0;
}
int calculate(int Height1, int Height2)
{
	int result = (Height1 + Height2) * 0.54;
	return result;
}