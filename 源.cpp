#include<stdio.h>
int main()
{
	int telephone, num;
	printf("��������Ҫ����ĵ绰��");
	scanf_s("%d", &telephone);
	if (telephone == 10086)
	{
		printf("��ӭ�µ��й��ƶ����ͷ���Ϊ���ṩ���·��񣺲�ѯ�����벦1���˹������벦0\n");
		scanf_s("%d", &num);
		switch (num)
		{
		case 1:
			printf("���Ļ������Ϊ100.2Ԫ\n");
			break;
		case 0:
			printf("���ã���ӭʹ���ƶ��ͷ�ҵ��Ϊ�˱�֤ͨ������������ͨ�����ᱻ¼����лл������\n");
			break;
		default:
			printf("�Բ���ϵͳû�д�ҵ��\n");
		}
	}
	else
	{
		printf("��ʱ�޷��ṩ����\n");
	}
	return 0;
}