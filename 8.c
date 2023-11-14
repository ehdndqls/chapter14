#include<stdio.h>
#define HEIGHT 3
#define WIDTH 3

void array_copy(int src[][WIDTH], int dst[][WIDTH]) {
	int* p1, * p2, * endp;

	p1 = &src[0][0];
	p2 = &dst[0][0];
	endp = &src[HEIGHT - 1][WIDTH - 1];

	while (p1 <= endp) {
		*p2 = *p1;
		p1++;
		p2++;
	}
}

int main() {
	int i, j;
	int src[HEIGHT][WIDTH] = { {100 , 30,67},{89,50,12},{19,60,90} }, dst[HEIGHT][WIDTH];

	printf("<원본 2차원 배열>\n");
	for (i = 0; i < HEIGHT; i++) {
		for (j = 0; j < WIDTH; j++)
			printf("%3d ", src[i][j]);
		printf("\n");
	}

	array_copy(src, dst);
	
	printf("\n<복사본 2차원 배열>\n");
	for (i = 0; i < HEIGHT; i++) {
		for (j = 0; j < WIDTH; j++)
			printf("%3d ", dst[i][j]);
		printf("\n");
	}
	return 0;
}