#include<stdio.h>
int main()
{
	int telephone, num;
	printf("请输入您要拨打的电话：");
	scanf_s("%d", &telephone);
	if (telephone == 10086)
	{
		printf("欢迎致电中国移动，客服将为您提供以下服务：查询话费请拨1，人工服务请拨0\n");
		scanf_s("%d", &num);
		switch (num)
		{
		case 1:
			printf("您的话费余额为100.2元\n");
			break;
		case 0:
			printf("您好，欢迎使用移动客服业务，为了保证通话质量，您的通话将会被录音，谢谢合作。\n");
			break;
		default:
			printf("对不起，系统没有此业务。\n");
		}
	}
	else
	{
		printf("暂时无法提供服务。\n");
	}
	return 0;
}