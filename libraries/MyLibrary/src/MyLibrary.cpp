#include <MyLibrary.h>

HandLibrary::HandLibrary() {
	index = 1;
}

Circle::Circle() {
	x = 0.5; y = 5; r = 3.2;
}

float Circle::DistanceSquared() {
	return x*x + y*y;
}