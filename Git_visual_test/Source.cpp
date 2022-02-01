#include <iostream>
#include <vector>
using namespace std;

class point {
	int x, y, z;
public:
	point() { x = y = z; }
	void print() { cout << x << " : " << y << " : " << z << "\n"; }
};

class figure {
	vector<point> polygons;
public:
	figure(vector<point> polygons) {
		this->polygons = polygons;
	}
	void print() {
		for (auto it = polygons.begin(); it != polygons.end(); it++) {
			it->print();
		}
	}
};

int main() {
	
	point p;
	p.print();
	return 0;

	return 0;
}   