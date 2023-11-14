#include<stdio.h>
#include<stdlib.h>
#define row 10
#define col 10

void start_game(int[][col]);
void game_of_life(int[][col]);
void print_board(int[][col]);
char generation = 0;

int main() {
	int board[row][col] = { 0 };
	char ch;

	start_game(board);
	print_board(board);

	while (1) {
		printf("종료하려면 q, 계속하려면 m:");
		ch = getchar();
		rewind(stdin);

		switch (ch) {
		case ('q'):
			return 0;
			break;
		case ('m'):
			system("cls");
			game_of_life(board);
			print_board(board);
			break;
		}
	}
	return 0;
}

void game_of_life(int board[][col]) {
	int new_board[row][col] = { 0 };
	int neighbors;
	int count = 0;
	int dx, dy, ni, nj;
	int* p, * endp,*np;

	p = &board[0][0];
	endp = &board[row - 1][col - 1];
	np = &new_board[0][0];

	while (p <= endp) {
		neighbors = 0;
		for (dy = -1; dy <= 1; dy++) {
			for (dx = -1; dx <= 1; dx++) {
				if (dx == 0 && dy == 0) continue;
				ni = dx;
				nj = dy;
				if (dx == -1 && (count % row) == 0)
					ni = row - 1;
				else if (dx == 1 && (count & row == row - 1))
					ni = 1 - row;
				if (dy == -1 && (int)count / row == 0)
					nj = (col - 1);
				else if (dy == 1 && (int)count / row == col - 1)
					nj = (1 - col);
				neighbors += *(p+(ni+nj*row));
			}
		}
		if (*p) {
			*np = (neighbors == 2 || neighbors == 3);
		}
		else {
			*np = (neighbors == 3);
		}
		p++;
		np++;
		count++;
	}
	
	p = &board[0][0];
	np = &new_board[0][0];

	while(p<=endp){
			*p = *np;
			p++;
			np++;
	}
	generation++;
}

void start_game(int board[][col]) {
	board[4][5] = 1;
	board[5][5] = 1;
	board[6][5] = 1;
//	board[11][9] = 1;
	//board[11][11] = 1;
}

void print_board(int board[][col]) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%c ", board[i][j] ? 'X' : '-');
		}
		printf("\n");
	}
	printf("\n");
	printf("generation: %d\n",generation);
}