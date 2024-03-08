#include <iostream>
using namespace std;

int a[20];  // deklarasi array a dengan ukuran 20
int n;		// deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input() {
	while (true) {
		cout << "memasukkan banyaknya elemen pada array ; ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\narray dapat mempunyai maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "===================" << endl;
	cout << "masukan elemen array" << endl;
	cout << "===================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ";";
		cin >> a[i];
	}
}

void bubbleSortArray() {
	int pass = 1;

	do {
		for (int j = 0; j <= n - 1 - pass; j++) {

			if (a[j] > a[j + 1]) {
				int temp;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
		pass = pass + 1;

	} while (pass <= n - 1);
}



