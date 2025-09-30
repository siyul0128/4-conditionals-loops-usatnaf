#include <stdio.h>

void check369(int);

int main(void) {
	int num = 0;
	printf("369게임에 오신걸 환영합니다!\n");
	printf("언제까지 합니까?>>>\n");
	scanf_s("%d", &num);
	for (int i = 1; i < num; i++) {
		check369(num);
	}
	
	return 0;
}

void check369(int num) {
	
	
		int contain369 = 0;
		int temp = num;

		while (temp > 0) {
			int digit = temp % 10;

			switch (digit) {
			case 3:
			case 6:
			case 9:
				contain369 = 1;
			}

			temp = temp / 10;
		}
		if (contain369)printf("짝~\n");
		else printf("%d", num);
	}


