#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//zad. 1
//int main()
//{
//    cout << "Podaj 10 liczb calkowitych: ";
//    int tab[10];
//    int n;
//    for (int i = 0; i < 10; i++) {
//        cin >> n;
//        tab[i] = n;
//    }
//    for (int i = 9; i > 0; i--) {
//        cout << tab[i] << " ";
//    }
//    return 0;
//}

//zad. 2
//int main() {
//	long long tab[100];
//	int n;
//	cout << "Ile kolejnych licb Fibonacciego chcesz wyznaczyc : ";
//	cin >> n;
//	if (n < 2 || n>100) {
//		cout << "Podano nie poprana liczbe. Musi miescic sie ona w przedziel 2-100.";
//		return 1;
//	}
//	tab[0] = 0;
//	tab[1] = 1;
//	for (int i = 2; i < n; i++) {
//		tab[i] = tab[i - 1] + tab[i - 2];
//	}
//	cout << "Ciag Fibonacciego dla " << n << " elementow wyglada tak: ";
//	for (int i = 0; i < n; i++) {
//		cout << tab[i] << ", ";
//	}
//	cout << endl;
//	return 0;
//}

int main() {
	srand(time(NULL));
	int tab[10];
	int suma = 0;
	cout << "Wartosci tablicy 10-cio elelmentowej: ";
	for (int i = 0; i < 10; i++) {
		tab[i] = rand() % 10 + 1;
		cout << tab[i] << ", ";
		suma += tab[i];
	}
	cout << endl;
	cout << fixed << setprecision(2);
	double srAr = suma / 10;
	int mniejsze = 0;
	int min = tab[0];
	int max = tab[0];
	for (int i = 0; i < 10; i++) {
		if (n < srAr) {
			mniejsze += 1;
		}
		if (min > tab[i]) {
			tab[i] == min;
		}
		if (max < tab[i]) {
			tab[i] == max;
		}
	}
	cout << "Srednia wartosci tablicy wynosi: " << srAr << ". A elementow mniejszych od niej jest: " << mniejsze << endl;
	cout << "Kolejno najmnijesza i najwieksza wartosc w tej tablicy wynosza: " << min << ", " << max << "." << endl;
	return 0;
}