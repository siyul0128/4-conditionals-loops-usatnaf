#include <stdio.h>
int main(void) {
void print_calender(int this_mth);
	


	int chuseok_mth = 10;
	int chuseok = 6;

	int this_mth = 9;
	int today = 30;

	if (this_mth == chuseok_mth)
	{
		printf("Chuseok is coming!!");
	}
	else {
		printf("No Chuseok yetㅠㅠ");
	}

	for (int i = today; i < 31; i++) {
		printf("\nToday is %d월 %d일!", this_mth, today);
	}
	
	print_calender(this_mth);
	
	return 0;
}

void print_calender(int this_mth)
{
	int short_mth = 2,
		mid_mth_1 = 9,
		mid_mth_2 = 4,
		mid_mth_3 = 6,
		mid_mth_4 = 11,
		days;

	switch (this_mth) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30; break;
	case 2:
		days = 28; break;
	default:
		printf("That's noy a month");
		return;

	}
	printf("*** %d월 ***\n",this_mth);
	int cols = 7;
	int rows = days / cols;

	for (int j = 1; j < days; j++) {
		for (int i = 0; i <= 7; i++) {
			printf("%d\t", j);
		}
		printf("\n");
	}

}
