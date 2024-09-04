#include <iostream>
#include <fstream>

using namespace std;

int TakeDiscr(int b, int a, int c) {

	int Discr = (b * b) - 4 * a * c;

	return Discr;
}

int main() {

	int b = 0;
	int a = 0;
	int c = 0;
	int Discr;

	cout << "Enter B\n";
	cin >> b;

	cout << "Enter A\n";
	cin >> a;

	cout << "Enter C\n";
	cin >> c;

	Discr = TakeDiscr(b, a, c);
	cout << Discr;

	if (Discr == 0) {
		cout << "One root.\n";
	}
	else if (Discr > 0) {
		cout << "Two roots\n";
	}
	else if (Discr < 0) {
		cout << "No roots.\n";
	}

}