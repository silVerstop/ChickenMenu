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
	{"1) 후라이드","2) 양념","3) 고구마치즈탕수육"},
	{"1) 후라이드","2) 양념","3) 감자피자탕수육"},
	{"1) 깻잎갈릭","2) 깻잎커리","3) 별꽃스윙스"},
	{"1) 허니콤보","2) 레드콤보","3) 살살치킨"},
	{"1) 볼케이노","2) 고추바사삭","3) 갈비천왕"}
	};

	int i;

	printf("\n");
	printf("1) 짱닭치킨");
	printf("   2) 마슬랜치킨");
	printf("   3) 깻잎두마리치킨");
	printf("   4) 교촌치킨");
	printf("   5) 굽네치킨\n");
	printf("===========================================================================\n");
	printf("\n");
	printf("다음 중 원하는 치킨브랜드의 번호를 입력하시오 : ");
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
		printf("존재하지 않는 메뉴 번호입니다.\n");
		break;
	}
}

void chicken_price(int k)
{
	int num;
	printf("원하는 메뉴의 번호를 입력하시오 : ");
	scanf_s("%d", &num);
	printf("\n");

	if (num == 1) {
		printf("해당 메뉴의 가격은 %d원 입니다.", JMTGR[k].x);
		printf("\n");
	}
	else if (num == 2) {
		printf("해당 메뉴의 가격은 %d원 입니다.", JMTGR[k].y);
		printf("\n");
	}
	else if (num == 3) {
		printf("해당 메뉴의 가격은 %d원 입니다.", JMTGR[k].z);
		printf("\n");
	}
	else {
		printf("해당 메뉴 번호는 존재하지 않습니다.\n");
		printf("\n");
	}
}



