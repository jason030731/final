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

	
	printf("\n\t�_��̤j�u�W����W�u��  ��l���B��10��  �̫�Ĺ�o���B��81000�N�j�n \n");

	

	while (choice != 4)
	{
		do
		{
			printf("\n\t�{�b��%d��\n", money);
			printMenu();
			scanf_s("%d", &choice);
		} while (choice < 0 || choice>4);

		if (choice != 4)
		{
			switch (choice)
			{
			case 0:
				printf("1~6�O�p 7~12�O�j �n��j�٬O�p?  �j�O1�p�O2    Ĺ�@������½��\n");
				scanf("%d", &a);
				printf("�n�U�`�h��  �еo���j�����n��J��L�����J���Ʀr\n");
				scanf("%d", &b);
				c = (rand() % 6 + 1) + (rand() % 6 + 1);
				printf("��l�O%d\n", c);
				if (a = 1)
				{
					if (c > 6)
					{
						money = money + b * 2;
						printf("Ĺ�F\n");
						winlose(money);
					}
					else
					{
						money = money - b;
						printf("��F\n");
						winlose(money);
					}
				}
				else if (a = 2)
				{
					if (c < 7)
					{
						money = money + b * 2;
						printf("Ĺ�F\n");
						winlose(money);
					}
					else
					{
						money = money - b;
						printf("��F\n");
						winlose(money);

					}
				}
				break;
		