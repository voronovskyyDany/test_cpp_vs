#include <iostream>
#include <vector>
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
		x = 0;
		y = 0;
	}
	int get_x() {
		return x;
	}
	int get_y() {
		return y;
	}
	void set_x() {
		cin >> x;
	}
	void set_y() {
		cin >> y;
	}
};

class Figure {
	vector<Point> polygons;
public:
	Figure(int size) {
		int x{ 0 };
		int y{ 0 };

		for (int i = 0; i < size; i++) {
			cin >> x;
			cin >> y;
			polygons.push_back(Point(x, y));
		}
	}
	void print() {
		for (auto it = polygons.begin(); it != polygons.end(); it++) {
			cout << "X " << it->get_x() << " : " << "Y " << it->get_y() << "\n";
		}
	}
};

int main() {
	Figure p(1);
	Figure l(2);
	Figure t(3);
	cout << "Point:\n";
	p.print();
	cout << "Line:\n";
	l.print(); 
	cout << "Triangle:\n";
	t.print();

	return 0;
}