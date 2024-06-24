

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Nhap so: ";
	cin >> n;
	cout << "Uoc So Cua " << n << " La: ";
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			cout << i << " ";
		}
	}
	cout << endl;

	cout << " Boi So Cua " << n << " la: ";
	for (int i = 1; i <= n; i++) {
		cout << n * i << " ";
	}
	cout << endl;

	return 0;
}


