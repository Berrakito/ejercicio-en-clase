#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n1, n2;
	cout << "Ingresa el primer numero: ";
	cin >> n1;
	cout << "Ingresa el degundo numero: ";
	cin >> n2;
	
	int diff = abs(n1 - n2);
	
	if (diff == 1) {
		cout << "Los numeros son consecutivos." << endl;
	} else {
		cout << "Los numeros no sos consecutivos." << endl;
	}
	
	return 0;
}
