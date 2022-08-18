#include<stdio.h>
int calculate(int Long, int Width,int Height);
int main()
{
	int m_Long;
	int m_Width;
	int m_Height;
	int result;

	printf("请输入高度\n");
	scanf_s("%d", &m_Height);

	printf("请输入长度\n");
	scanf_s("%d",&m_Long);

	printf("请输入宽度\n");
	scanf_s("%d",&m_Width);

	result = calculate(m_Long, m_Width,m_Height);
	printf("长方形的体积是：");
	printf("%d\n", result);
	return 0;
}

int calculate(int Long, int Width,int Height)
{
	int result = Long * Width * Height;
	return result;
}