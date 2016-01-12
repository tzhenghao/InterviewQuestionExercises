#include <iostream>

using namespace std;


bool isRectanglesIntersect(const Rectangle &r1, const Rectangle &r2) {

	
	// Swap rectangles so that r1 is always to the left of r2		
	if (r2.topLeft.x < r1.topLeft.x) {
		Rectangle temp = r1;
		r1 = r2;
		r2 = temp;
	}

	
	if (r2.topLeft.x >= r1.topLeft.x && r2.topLeft.x <= r1.topLeft.x
		&& r2.topLeft.y <= r1.topLeft.y && r2.topLeft.y >= r1.bottomRight.y) {
		return false;
	}
	else if (r2.topLeft.x >= r1.topLeft.x && r2.topLeft.x <= r1.topLeft.x
		&& r2.bottomRight.y <= r1.topLeft.y && r2.bottomRight.y >= r1.bottomRight.y) {
		return false;
	}
		
	return true;
}
