#include <stdio.h>

#define true 1

int money; //������ ��
int price; // ���� ����
int menu;  // ����
int num;   //���� ����
int change;  //�Ž�����

int pay()
{
	while (true) {
		printf("************���Ǳ��Դϴ�.************\n");
		printf("          ���� �Ǵ� ���� �����ϼ���.\n");
		printf("          500�� �̻� �������ּ���.    \n");

		printf("          �󸶸� �����Ͻðڽ��ϱ�??   \n");
		scanf_s("%d", &money);

		if (money < 500) {
			printf("500�� �̻� �������ּ���.\n");
			continue;
		}
		else {
			printf("%d���� ���ԵǾ����ϴ�.\n", money);
			return 0;
		}
	}
}

int menupan()
{
	while (true) {
		printf("************���Ǳ�************\n");
		printf("                              \n");
		printf("        1.�������꽺          \n");
		printf("        2.��ī������Ʈ        \n");
		printf("        3.������              \n");
		printf("        4.��ī�ݶ�            \n");
		printf("        5.����                \n");
		printf("        6.��������Ʈ          \n");
		printf("        7.�Ƹ޸�ī��          \n");
		printf("                              \n");
		printf("\n");
		printf("        ��ȣ�� �����ּ���!!!  \n");
		scanf_s("%d", &menu);

		

	}
}
int main() {
	pay();
	menupan();


	return 0;

}

