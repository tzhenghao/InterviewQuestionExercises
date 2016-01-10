// Name: Zheng Hao Tan
// Email: tanzhao@umich.edu
// Date: 3/5/2014

// Question: Give an algorithm for finding a ^ b. Make it as efficient as
//			 possible. Only works with positive Bs.

// Explanation: We can do this in O(log b) time via recursion (faster if we did
//				it tail recursively). However, I'm going to further optimize
//				this by using dynamic programming (memoization). 

//				By using dynamic programming, we can use constant lookup for 
//				values that we have already computed before. However, we are 
//				trading memory for time.

#include <iostream>
#include <vector>
using namespace std;

// Prototypes.
int calcPow(vector<int> &OneDPowArray, int b);
int calcPowHelper(vector<int> &OneDPowArray, int b);

int main()
{
	int a, b;

	cout << "Please enter a and b, where the format is a ^ b: \n";
	cin >> a >> b;

	vector <int> OneDPowArray(b + 1, -1);

	OneDPowArray[0] = 1;
	OneDPowArray[1] = 1;
	OneDPowArray[2] = a;

	cout << a << " ^ " << b << " is : " << calcPow(OneDPowArray, b) << "\n";

	return 0;
}

// REQUIRES: The calculated vector, base number and the exponent.
// EFFECTS: Calculates a ^ b.
int calcPow(vector<int> &OneDPowArray, int b) {

	if (b > 1)
		return calcPowHelper(OneDPowArray, b);
	else if (b == 1)
		return a;
	else
		return 1;
}

// REQUIRES: The calculated vector, base number and the exponent.
// EFFECTS: Calculates a ^ b tail recursively (with memoization).
int calcPowHelper(vector<int> &OneDPowArray, int b) {

	// By using memoization, we are able to save time by not recalculating values
	// that we have already calculated before. We are now trading O(b) memory by
	// using a vector for faster runtime.

	// We can access whatever we have computed before. 
	if (OneDPowArray[b] != -1)
		return OneDPowArray[b];
	else {
		
		if (b % 2) 
			OneDPowArray[b] = OneDPowArray[b/2] * OneDPowArray[b/2 + 1];
		else
			OneDPowArray[b] = OneDPowArray[b/2] * OneDPowArray[b/2];
		
		return OneDPowArray[b];
	}
}
