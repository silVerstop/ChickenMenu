#define _CRT_SECURE_NO_WARNNINGS
#include<stdio.h>


struct chicken{
	char x[20];
	char y[20];
	char z[20];
};


int main(void)
{

	struct chicken[5] = {
	{"�Ķ��̵�","���","����ġ��������"},
	{"�Ķ��̵�","���","��������������"},
	{"���ٰ���","����Ŀ��","���ɽ�����"},
	{"����޺�","�����޺�","���ġŲ"},
	{"�����̳�","���߹ٻ��","����õ��"}
	};

	int i;



	char brand[20];
	char menu[20];
	int leng;

	printf("¯��,������,���ٵθ��� ġŲ �� �԰���� ġŲ�귣�带 �Է��ϼ���.:");
	gets_s(brand, 19);
	printf("\n");

	if (strcmp(brand, "¯��") == 0) {
		puts(J.x);
		puts(J.y);
		puts(J.z);

		printf("���ϴ� �޴��� �Է��Ͻÿ�:");
		gets_s(menu, 19);
		if (strcmp(menu, "�Ķ��̵�") == 0)
			printf("������ �޴��� ������ 13000�� �Դϴ�.");
		else if (strcmp(menu, "���") == 0)
			printf("������ �޴��� ������ 14000�� �Դϴ�.");
		else if (strcmp(menu, "����ġ��������") == 0)
			printf("������ �޴��� ������ 16000�� �Դϴ�.");
		else
			printf("������ �귣�忡 �ش�޴��� ���������ʽ��ϴ�.");


	}

	else if (strcmp(brand, "������") == 0) {
		puts(M.x);
		puts(M.y);
		puts(M.z);
		printf("���ϴ� �޴��� �Է��Ͻÿ�:");
		gets_s(menu, 19);
		if (strcmp(menu, "�Ķ��̵�") == 0)
			printf("������ �޴��� ������ 12000�� �Դϴ�.");
		else if (strcmp(menu, "���") == 0)
			printf("������ �޴��� ������ 13000�� �Դϴ�.");
		else if (strcmp(menu, "��������������") == 0)
			printf("������ �޴��� ������ 16000�� �Դϴ�.");
		else
			printf("������ �귣�忡 �ش�޴��� ���������ʽ��ϴ�.");


	}

	else if (strcmp(brand, "���ٵθ���") == 0) {
		puts(T.x);
		puts(T.y);
		puts(T.z);
		printf("���ϴ� �޴��� �Է��Ͻÿ�:");
		gets_s(menu, 19);
		if (strcmp(menu, "�Ķ��̵�") == 0)
			printf("������ �޴��� ������ 15000�� �Դϴ�.");
		else if (strcmp(menu, "���") == 0)
			printf("������ �޴��� ������ 16000�� �Դϴ�.");
		else if (strcmp(menu, "���ɽ�����") == 0)
			printf("������ �޴��� ������ 15000�� �Դϴ�.");
		else
			printf("������ �귣�忡 �ش�޴��� ���������ʽ��ϴ�.");


	}
	else
		printf("���ϴ� ġŲ�귣�带 ã�� �� �����ϴ�.");
}

