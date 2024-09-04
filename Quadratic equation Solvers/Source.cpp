#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int TakeDiscr(int b, int a, int c) {					//Discriminant Formula

	int Discr = (b * b) - 4 * a * c;

	return Discr;
}

int TakeRootInOneRoot(int b, int a) {					//Solo Root root formula

	int RootX = -(b / (2 * a));

	return RootX;
}

//
int takeFirstRootInDoubleRoot(int Discr, int a, int b) { // first root in double root

	int FirstRoot = (-b - sqrt(Discr)) / (2 * a);

	return FirstRoot;
}

int takeSecondRootInDoubleRoot(int Discr, int a, int b) { // second root in double root

	int SecondRoot = (-b + sqrt(Discr)) / (2 * a);

	return SecondRoot;
}

//

int main() {

	int b = 0;
	int a = 0;
	int c = 0;
	int Discr;

	int FirstRoot = 0;
	int SecondRoot = 0;

	bool NoRoots = false;
	bool OneRoot = false;
	bool TwoRoots = false;

	cout << "Enter B\n";
	cin >> b;

	cout << "Enter A\n";
	cin >> a;

	cout << "Enter C\n";
	cin >> c;

	Discr = TakeDiscr(b, a, c);
	cout << Discr;
	cout << endl;

	if (Discr == 0) {
		cout << "One root.\n";

		OneRoot = true;
	}
	else if (Discr > 0) {
		cout << "Two roots\n";

		TwoRoots = true;
	}
	else if (Discr < 0) {
		cout << "No roots.\n";

		NoRoots = true;
	}

	if (NoRoots) {
		exit(0);
	}
	else if (OneRoot) {

		FirstRoot = TakeRootInOneRoot(b, a);

		cout << "Root = " << FirstRoot << endl;

	}
	else if (TwoRoots) {

		FirstRoot = takeFirstRootInDoubleRoot(Discr, a, b);
		SecondRoot = takeSecondRootInDoubleRoot(Discr, a, b);

		cout << "First root - " << FirstRoot << endl;
		cout << "Second root - " << SecondRoot << endl;

	}

}