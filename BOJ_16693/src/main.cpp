#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double a, p1;
	cin >> a >> p1;

	auto q1 = a / p1;

	double r, p2;
	cin >> r >> p2;

	constexpr double pi = 3.1415926535;

	auto q2 = pi * r * r / p2;

	if (q1 < q2) {
		cout << "Whole pizza";
	}
	else {
		cout << "Slice of pizza";
	}

	return 0;
}