#include <iostream>
using namespace std;

int main() {
	int array[15], count;

	cout << "Enter 15 Array elements " << endl;

	for (int i = 0; i < 15; i++) {
		cin >> array[i];
	}

	cout << "Array elements are as follows: " << endl;

	for (int j = 0; j < 15; j++) {
		cout << array[j] << " ";
	}

	cout << endl;

	for (int k = 0; k < 15; k++) {
		count = 0;

		for (int j = k + 1; j < 15; j++) { // Start from k+1 to avoid double-counting
			if (array[k] == array[j]) {
				count++;
			}
		}

		if (count != 0) {
			cout << "Count of number " << array[k] << " is " << count + 1 << endl;
		}
	}

	system("pause");
	return 0;
}
