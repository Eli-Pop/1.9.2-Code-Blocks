// Demonstrate a block of code.
#include <iostream>
using namespace std;

int main()
{
	double result, n, d;
	cout << "Enter value: ";
	cin >> n;

	cout << "Enter divisor: ";
	cin >> d;

	// the target of this if is a block
	if (d != 0)
	{ // The target of this if is the entire block.
		cout << "d does not equal zero so division is OK" << "\n";
		result = n / d; 
		cout << n << " / " << d << " is " << result;
	}

	system("pause");
	return 0;
}