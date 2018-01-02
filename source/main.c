#include <stdio.h>
#include <stdlib.h>
void printMenu(void);
void winlose(int);
int main()
{
	srand(time(NULL));
	int a, b, c, d,e,f,h;
	int money = 10;
	int choice = 0;

	
	printf("\n\t北科最大線上賭場上線拉  初始金額為10元  最後贏得金額為81000就大聲 \n");

	

	while (choice != 4)
	{
		do
		{
			printf("\n\t現在有%d元\n", money);
			printMenu();
			scanf_s("%d", &choice);
		} while (choice < 0 || choice>4);

		if (choice != 4)
		{
			switch (choice)
			{
			case 0:
				printf("1~6是小 7~12是大 要賭大還是小?  大是1小是2    贏一次獎金翻倍\n");
				scanf("%d", &a);
				printf("要下注多少  請發揮大腦不要輸入其他不能輸入的數字\n");
				scanf("%d", &b);
				c = (rand() % 6 + 1) + (rand() % 6 + 1);
				printf("骰子是%d\n", c);
				if (a = 1)
				{
					if (c > 6)
					{
						money = money + b * 2;
						printf("贏了\n");
						winlose(money);
					}
					else
					{
						money = money - b;
						printf("輸了\n");
						winlose(money);
					}
				}
				else if (a = 2)
				{
					if (c < 7)
					{
						money = money + b * 2;
						printf("贏了\n");
						winlose(money);
					}
					else
					{
						money = money - b;
						printf("輸了\n");
						winlose(money);

					}
				}
				break;
		