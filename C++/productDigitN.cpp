// Name: Zheng Hao Tan
// Email: tanzhao@umich.edu
// Date: Feb 14, 2013

// Question: Given a number N, find the smallest 3 digits number such that
// 			 the product of its digits is equal to N. 
// 			 For example for N = 100 , 3 digits number is 455.

// Explanation: One way to approach this question is to use a knapsack approach
//				to solve this question. Here are a few assumptions that I've 
//				made when approaching this question:

//				1. Since this is a product of the 3 digits that would eventually
//					form N, we can be sure that any of these 3 digits must range
//					from 1 <= x <= min(N, 9). Should we have face a digit where
//					N <= 9, we can be sure that the answer will always be 11x, 
//					where x = N.

//				2. One more way to think about this is to greedily select the 
//					smaller digits first then work our way through the last digit.

#include <iostream>
using namespace std;

// Prototypes.

int main() 
{

	return 0;
}
