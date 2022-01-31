#include <iostream>
using namespace std;

class Point {
	int x;
	int y;
public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	Point() {
		this->x = 0;
		this->y = 0;
	}
	int get_x() {
		return x;
	}
	int get_y() {
		return y;
	}
};

int main() {

	return 0;
}