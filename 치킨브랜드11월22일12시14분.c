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
	{"후라이드","양념","고구마치즈탕수육"},
	{"후라이드","양념","감자피자탕수육"},
	{"깻잎갈릭","깻잎커리","별꽃스윙스"},
	{"허니콤보","레드콤보","살살치킨"},
	{"볼케이노","고추바사삭","갈비천왕"}
	};

	int i;



	char brand[20];
	char menu[20];
	int leng;

	printf("짱닭,마슬랜,깻잎두마리 치킨 중 먹고싶은 치킨브랜드를 입력하세요.:");
	gets_s(brand, 19);
	printf("\n");

	if (strcmp(brand, "짱닭") == 0) {
		puts(J.x);
		puts(J.y);
		puts(J.z);

		printf("원하는 메뉴를 입력하시오:");
		gets_s(menu, 19);
		if (strcmp(menu, "후라이드") == 0)
			printf("선택한 메뉴의 가격은 13000원 입니다.");
		else if (strcmp(menu, "양념") == 0)
			printf("선택한 메뉴의 가격은 14000원 입니다.");
		else if (strcmp(menu, "고구마치즈탕수육") == 0)
			printf("선택한 메뉴의 가격은 16000원 입니다.");
		else
			printf("선택한 브랜드에 해당메뉴는 존재하지않습니다.");


	}

	else if (strcmp(brand, "마슬랜") == 0) {
		puts(M.x);
		puts(M.y);
		puts(M.z);
		printf("원하는 메뉴를 입력하시오:");
		gets_s(menu, 19);
		if (strcmp(menu, "후라이드") == 0)
			printf("선택한 메뉴의 가격은 12000원 입니다.");
		else if (strcmp(menu, "양념") == 0)
			printf("선택한 메뉴의 가격은 13000원 입니다.");
		else if (strcmp(menu, "감자피자탕수육") == 0)
			printf("선택한 메뉴의 가격은 16000원 입니다.");
		else
			printf("선택한 브랜드에 해당메뉴는 존재하지않습니다.");


	}

	else if (strcmp(brand, "깻잎두마리") == 0) {
		puts(T.x);
		puts(T.y);
		puts(T.z);
		printf("원하는 메뉴를 입력하시오:");
		gets_s(menu, 19);
		if (strcmp(menu, "후라이드") == 0)
			printf("선택한 메뉴의 가격은 15000원 입니다.");
		else if (strcmp(menu, "양념") == 0)
			printf("선택한 메뉴의 가격은 16000원 입니다.");
		else if (strcmp(menu, "별꽃스윙스") == 0)
			printf("선택한 메뉴의 가격은 15000원 입니다.");
		else
			printf("선택한 브랜드에 해당메뉴는 존재하지않습니다.");


	}
	else
		printf("원하는 치킨브랜드를 찾을 수 없습니다.");
}

