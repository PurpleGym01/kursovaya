#include "levels.hpp"

int check_area(int x, int y) {
	return level1.task[x][y] == 0;
}

void check_ans (int x, int y, int num) {
	if (level1.ans[x][y] == num) {
		level1.task[x][y] = num;
		//запускаем перерисовку
	}
}

int check_end() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (level1.task[i][j] == 0)
				return 0;
		}
	}
	return 1;
}