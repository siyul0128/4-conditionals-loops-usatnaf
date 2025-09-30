#include<stdio.h>

void q1(int);
void q2(int);
void q3(int);

int main(void) {
	int result = -5;

	q1(result);
	//q2(result);
	//q3(result);


	return 0;
}

void q1(int result) {
	if (result < 0) {
		result = result * (-1);
		printf("음성임 result:%d", result);
	}
	else {
		printf("양성임");
	}
	
}
/*void q2(int result) {
	if (result < 0) {
		result = result * (-1);
	}
	printf("result:%d", result);
}*/

void q3(int result) {
	
}