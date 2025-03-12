#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

void Euclid(int a, int b, int& d, int& x, int& y) {
	if (b == 0) {
		d = a;
		x = 1;
		y = 0;
		return;
	}
	Euclid(b, a % b, d, x, y);
	int temp = x;
	x = y;
	y = temp - (a / b) * y;

}

void Printab(int& a, int& b) {
	cout << "Print a: "; cin >> a;
	cout << "Print b: "; cin >> b;
}


int main()
{
	int a, b;
	Printab(a, b);

	auto start = high_resolution_clock::now();

	int d, x, y;
	Euclid(a, b, d, x, y);

	cout << d << " " << x << " " << y << endl;

	auto end = high_resolution_clock::now();
	auto duration = duration_cast<milliseconds>(end - start);
	cout << "Time duraction : " << duration.count() << " miliseconds" << endl;
	cout << "This work was made by student Kotsko Oleg Evgenievich 090304РПИб-о24" << endl;

	return 0;


}

