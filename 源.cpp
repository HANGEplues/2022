#include<stdio.h>
int calculate(int Height1, int Height2);
int main()
{
	int m_Height1;
	int m_Height2;
	int result;

	printf("�����븸�׵���ߣ�cm��\n");
	scanf_s("%d", &m_Height1);

	printf("������ĸ�׵���ߣ�cm��\n");
	scanf_s("%d", &m_Height2);

	result = calculate(m_Height1, m_Height2);
	printf("���ӵ�����ǣ�\n");
	printf("%d", result);
	printf("cm");
	return 0;
}
int calculate(int Height1, int Height2)
{
	int result = (Height1 + Height2) * 0.54;
	return result;
}