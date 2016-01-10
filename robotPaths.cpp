// Zheng Hao Tan
// tanzhao@umich.edu

int findRobotPaths(int X, int Y, int curX, int curY) {
	
	// Two ways to get to the end point (from top down or left to right).
	if (X == curX && Y == 0) {
		return 1;
	}
	else if (Y == curY && X == 0) {
		return 1;
	}
	else if (X == curX && Y == curY) {
		return 2;
	}
	else {
		return 2 + findRobotPaths(x, y, curX + 1, curY)
				+ findRobotPaths(x, y, curX, curY + 1);
	}
}
