#include <iostream>
#include <vector>
#include <string>
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
	void print() {
		cout << "X " << x << " : " << "Y " << y << "\n";
	}
};

class Figure {
protected:
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
	virtual void print() = 0;
};

class point : public Figure {
public:
	point() : Figure(1) {
		cout << "Point\n" << string(10, '-') << "\n";
	}
	void print() override {
		cout << "Point:\n";
		for (auto it = polygons.begin(); it != polygons.end(); it++) {
			it->print();
		}
	}
};

class line : public Figure {
public:
	line() : Figure(2) {
		cout << "Line\n" << string(10, '-') << "\n";
	}
	void print() override {
		cout << "Line:\n";
		for (auto it = polygons.begin(); it != polygons.end(); it++) {
			it->print();
		}
	}
};

class triangle : public Figure {
public:
	triangle() : Figure(3) {
		cout << "Triangle\n" << string(10, '-') << "\n";;
	}
	void print() override {
		cout << "Triangle:\n";
		for (auto it = polygons.begin(); it != polygons.end(); it++) {
			it->print();
		}
	}
};

class quadrilateral : public Figure {
public:
	quadrilateral() : Figure(4) {
		cout << "Quadrilateral\n" << string(10, '-') << "\n";;
	}
	void print() override {
		cout << "Quadrilateral:\n";
		for (auto it = polygons.begin(); it != polygons.end(); it++) {
			it->print();
		}
	}
};

int main() {
	point p;
	line l;
	triangle t;
	quadrilateral q;
	p.print();
	l.print();
	t.print();
	q.print();

	return 0;
}