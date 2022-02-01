#include <iostream>
using namespace std;

class point {
	int x, y, z;
public:
	point() { x = y = z; }
	void print() { cout << x << " : " << y << " : " << z << "\n"; }
};

int main() {
	
	point p;
	p.print();
	return 0;

	return 0;
}   