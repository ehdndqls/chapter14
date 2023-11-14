#include<stdio.h>
#define ROWS 6
#define COLS 3

int get_sum(int array[], int size) {
	int i, sum = 0;
	for (i = 0; i < size; i++) {
		sum += array[i];
	}
	return sum;
}

int main() {
	int sum = 0, m[ROWS][COLS], i,j;
	
	for (i = 0; i < COLS; i++) {
		for (j = 0; j < ROWS; j++) {
			m[j][i] = 10;
		}
	}

	for (i = 0; i < COLS; i++) {
		sum += get_sum(m[i], ROWS);
	}
	printf("정수의 합 = %d", sum);

	return 0;
}
