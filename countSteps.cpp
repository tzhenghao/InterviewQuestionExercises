// Zheng Hao Tan
// tanzhao@umich.edu

vector<int>tempBuffer(n, -1);

int countSteps(int n) {

	if (n < 0) {
		return 0;
	}
	else if (n == 0) {
		return 1;
	}
	else {
		
		if (tempBuffer[n] == -1) {
			tempBuffer[n] = countSteps(n-1) + countSteps(n-2) + countSteps(n-3);
		}
		
		return tempBuffer[n];
	}
}
