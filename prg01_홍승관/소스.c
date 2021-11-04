#include <stdio.h>

#define true 1

int money; //투입한 돈
int price; // 물건 가격
int menu;  // 물건
int num;   //물건 개수
int change;  //거스름돈

int pay()
{
	while (true) {
		printf("************자판기입니다.************\n");
		printf("          동전 또는 지폐를 투입하세요.\n");
		printf("          500원 이상 투입해주세요.    \n");

		printf("          얼마를 투입하시겠습니까??   \n");
		scanf_s("%d", &money);

		if (money < 500) {
			printf("500원 이상 투입해주세요.\n");
			continue;
		}
		else {
			printf("%d원이 투입되었습니다.\n", money);
			return 0;
		}
	}
}

int menupan()
{
	while (true) {
		printf("************자판기************\n");
		printf("                              \n");
		printf("        1.오렌지쥬스          \n");
		printf("        2.포카리스웨트        \n");
		printf("        3.레쓰비              \n");
		printf("        4.코카콜라            \n");
		printf("        5.생수                \n");
		printf("        6.스프라이트          \n");
		printf("        7.아메리카노          \n");
		printf("                              \n");
		printf("\n");
		printf("        번호를 눌러주세요!!!  \n");
		scanf_s("%d", &menu);

		

	}
}
int main() {
	pay();
	menupan();


	return 0;

}

