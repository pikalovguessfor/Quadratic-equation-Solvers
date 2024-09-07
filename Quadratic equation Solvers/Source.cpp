#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

float TakeDiscr(float b, float a, float c) {					//Discriminant Formula

	float Discr = (b * b) - 4 * a * c;

	return Discr;
}

short TakeRootInOneRoot(float b, float a) {					//Solo Root root formula

	float RootX = -(b / (2 * a));

	return RootX;
}

//
float takeFirstRootInDoubleRoot(float Discr, float a, float b) { // first root in double root

	float FirstRoot = (-b - sqrt(Discr)) / (2 * a);

	return FirstRoot;
}

short takeSecondRootInDoubleRoot(float Discr, float a, float b) { // second root in double root

	float SecondRoot = (-b + sqrt(Discr)) / (2 * a);

	return SecondRoot;
}

//
//														Filestream Scripts

void GetNumbersInsFile(float x, float y, float z) {

	ofstream FileToWrite;
	FileToWrite.open("numbers.txt");

	if (FileToWrite.is_open()) {

		FileToWrite << x;
		FileToWrite << endl;
		FileToWrite << y;
		FileToWrite << endl;
		FileToWrite << z;

	}

}

//

int main() {

	const float bCon = 0.0;
	const float aCon = 0.0;
	const float cCon = 0.0;

	while (true) {


		float b = 0;
		float a = 0;
		float c = 0;
		float Discr;

		float FirstRoot = 0;
		float SecondRoot = 0;

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
			
			continue;

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

		

		cout << endl<< "Numbers were entered the file - numbers.txt";

		GetNumbersInsFile(Discr, FirstRoot, SecondRoot);



		cout << endl << endl;

		b = bCon;
		a = aCon;
		c = cCon;
		
	}

}