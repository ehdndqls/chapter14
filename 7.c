#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define HEIGHT 10
#define WIDTH 10

int main() {
	int i, j;
	int* p, * endp;
	int image[HEIGHT][WIDTH];

	srand((unsigned)time(NULL));

	for (i = 0; i < HEIGHT; i++)
		for (j = 0; j < WIDTH; j++)
			image[i][j] = rand() % 255;
	
	for (i = 0; i < HEIGHT; i++) {
		for (j = 0; j < WIDTH; j++)
			printf("%3d ", image[i][j]);
		printf("\n");
	}

	printf("\n");

	p = &image[0][0];
	endp = &image[HEIGHT - 1][WIDTH - 1];

	while (p <= endp) {
		(*p < 128) ? (*p = 0) : (*p = 255);
		p++;
	}
	for (i = 0; i < HEIGHT; i++) {
		for (j = 0; j < WIDTH; j++)
			printf("%3d ", image[i][j]);
		printf("\n");
	}
	return 0;
}

