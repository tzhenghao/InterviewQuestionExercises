// Name: Zheng Hao Tan
// Email: tanzhao@umich.edu
// Date: May 29, 2014

// Question: Given an 2D matrix M, is filled either using X or O,
// 			 you need to find the region which is filled by O and surrounded by X 
// 			 and fill it with X. 

// example 1: 

// X X X X X 
// X X O O X 
// X X O O X 
// O X X X X 

// Answer : 

// X X X X X 
// X X X X X 
// X X X X X 
// O X X X X 

// example 2: 

// X X X X X 
// X X O O X 
// X X O O O 
// O X X X X 

// answer 2: 
// X X X X X 
// X X O O X 
// X X O O O 
// O X X X X

// Explanation: One of the ways that I would use to approach this problem is 
//				dynamic programming. By doing this, we can trade memory for better
//				runtime.

// Implementation:  We can use a bottom up approach by using a 2D array (vector)
//					to store temporary variables as we try to surround the 
//					region filled with O.

#include <iostream>
using namespace std;

int main()
{


	return 0;
}
