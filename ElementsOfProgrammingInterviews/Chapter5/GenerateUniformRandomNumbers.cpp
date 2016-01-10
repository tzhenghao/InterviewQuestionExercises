#include <iostream>

using namespace std;

int generateRandomUniqueNumbers(int a, int b) {

	int randNum = 0;

	do {
		randNum = 0;
		while(randNum < a) {

			randNum = randNum << 1 | gen();
		}
	} while (randNum > b);

	return randNum;
}
