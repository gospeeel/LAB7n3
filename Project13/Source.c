#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int x;
	puts("������� ����� �� 1 �� 13");
	scanf("%d", &x);
	switch (x)
	{
	case 1:
		printf("one");
		break;
	case 2:
		printf("two");
		break;
	case 3:
		printf("three");
		break;
	case 4:
		printf("four");
		break;
	case 5:
		printf("five");
		break;
	case 6:
		printf("six");
		break;
	case 7:
		printf("seven");
		break;
	case 8:
		printf("eight");
		break;
	case 9:
		printf("nine");
		break;
	case 10:
		printf("ten");
		break;
	case 11:
		printf("eleven");
		break;
	case 12:
		printf("twelve");
		break;
	case 13:
		printf("thirteen");
		break;

	}

}