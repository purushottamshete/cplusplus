#include <iostream>

class point {
	char x;
	char y;
	char z;
};

class pointx {
	char x;
};

class pointy : public pointx {
	char y;
};

class pointz : public pointy {
	char z;
};

using namespace std;

int main()
{
	point p1;
	pointz pz1;
	cout << "\n Size of float : "<<sizeof(char);
	cout << "\n Size of p1 : "<<sizeof(p1);
	cout << "\n Size of pz1 : "<<sizeof(pz1);
}
