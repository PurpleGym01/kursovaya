#include "zagolovok.hpp"

int check_area(int x, int y) {
	return now.task[x][y] == 0;
}

void check_ans (int x, int y, int num) {
	if (now.ans[x][y] == num) {
		now.task[x][y] = num;
		//запускаем перерисовку
	}
}

int check_end() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (now.task[i][j] == 0)
				return 0;
		}
	}
	return 1;
}