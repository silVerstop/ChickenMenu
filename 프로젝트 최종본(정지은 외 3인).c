#define _CRT_SECURE_NO_WARNNINGS
#include<stdio.h>
void chicken_price(int x);


struct chicken {
	char x[20];
	char y[20];
	char z[20];
};

struct price {
	int x;
	int y;
	int z;
};

struct price JMTGR[5] = {
		{13000,14000,16000},
	{13000,13000,18000},
	{15000,16000,15500},
	{18000,19000,18500},
	{18000,19500,21000}
};


int main(void)
{

	struct chicken JMT[5] = {
	{"1) �Ķ��̵�","2) ���","3) ����ġ��������"},
	{"1) �Ķ��̵�","2) ���","3) ��������������"},
	{"1) ���ٰ���","2) ����Ŀ��","3) ���ɽ�����"},
	{"1) ����޺�","2) �����޺�","3) ���ġŲ"},
	{"1) �����̳�","2) ���߹ٻ��","3) ����õ��"}
	};

	int i;

	printf("\n");
	printf("1) ¯��ġŲ");
	printf("   2) ������ġŲ");
	printf("   3) ���ٵθ���ġŲ");
	printf("   4) ����ġŲ");
	printf("   5) ����ġŲ\n");
	printf("===========================================================================\n");
	printf("\n");
	printf("���� �� ���ϴ� ġŲ�귣���� ��ȣ�� �Է��Ͻÿ� : ");
	scanf_s("%d", &i);
	printf("\n");

	switch (i)
	{
	case 1:
		puts(JMT[0].x);
		puts(JMT[0].y);
		puts(JMT[0].z);
		printf("\n");
		chicken_price(0);
		break;

	case 2:
		puts(JMT[1].x);
		puts(JMT[1].y);
		puts(JMT[1].z);
		printf("\n");
		chicken_price(1);
		break;

	case 3:
		puts(JMT[2].x);
		puts(JMT[2].y);
		puts(JMT[2].z);
		printf("\n");
		chicken_price(2);
		break;

	case 4:
		puts(JMT[3].x);
		puts(JMT[3].y);
		puts(JMT[3].z);
		printf("\n");
		chicken_price(3);
		break;

	case 5:
		puts(JMT[4].x);
		puts(JMT[4].y);
		puts(JMT[4].z);
		printf("\n");
		chicken_price(4);
		break;

	default:
		printf("�������� �ʴ� �޴� ��ȣ�Դϴ�.\n");
		break;
	}
}

void chicken_price(int k)
{
	int num;
	printf("���ϴ� �޴��� ��ȣ�� �Է��Ͻÿ� : ");
	scanf_s("%d", &num);
	printf("\n");

	if (num == 1) {
		printf("�ش� �޴��� ������ %d�� �Դϴ�.", JMTGR[k].x);
		printf("\n");
	}
	else if (num == 2) {
		printf("�ش� �޴��� ������ %d�� �Դϴ�.", JMTGR[k].y);
		printf("\n");
	}
	else if (num == 3) {
		printf("�ش� �޴��� ������ %d�� �Դϴ�.", JMTGR[k].z);
		printf("\n");
	}
	else {
		printf("�ش� �޴� ��ȣ�� �������� �ʽ��ϴ�.\n");
		printf("\n");
	}
}



