#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROWS 6
#define COLS 3

int get_average(int list[], int n) {
	int i, sum = 0;
	for (i = 0; i < n; i++) {
		sum += list[i];
	}
	return sum/n;
}

int main() {
	int sum = 0, m[ROWS][COLS], i, j;

	srand((unsigned)time(NULL));

	for (i = 0; i < COLS; i++) {
		for (j = 0; j < ROWS; j++) {
			m[j][i] = rand()%100;
		}
	}

	for (i = 0; i < COLS; i++) {
		printf("%dÇàÀÇ Æò±Õ°ª=%d\n",i,get_average(m[i],ROWS));
	}

	return 0;
}
