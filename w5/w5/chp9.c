#include<stdio.h>

void q1(int);
void q2(int);



int main(void) {

	return 0;

}

void q1(int m, int n) {
	for (m = 5; m < 7; m++) {
		for (n = 0; n < 3; n++) {
			if (m == 5 && n == 1) break;
			if (n == 2)continue;
			printf("m(%d)-n(%d)\n", m, n);
		}
	}
}