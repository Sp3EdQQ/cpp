#include <iostream>
#include <time.h>
using namespace std;

void polekwadratu(int a) {
	int x = a * a;
	cout << x << endl;
}
void poleprostokatu(int a, int b) {
	int x = a * b;
	cout << x << endl;
}
void obwkwadratu(int a) {
	int x = a * 4;
	cout << x << endl;
}
void obwprostokatu(int a, int b) {
	int x = a + a + b + b;
	cout << x << endl;
}
int main() {
	int wejscie;
	do
	{	
		cout << "[1] Oblicz pole\n" << "[2] Oblicz obwod\n" << "[0] Wyjście" << endl;
		cin >> wejscie;
		if (wejscie == 1)
		{

			cout << "[1] Kwadratu\n[2] Prostokatu\n";
			cin >> wejscie;
			if (wejscie == 1)
			{
				int b;
				cin >> b;
				polekwadratu(b);
			}
			else if (wejscie == 2) {
				int x;
				int y;
				cout << "Podaj wymiary:\n Długosc: ";
				cin >> x;
				cout << "Szerokosc: ";
				cin >> y;
				poleprostokatu(x, y);
			}
		}
		else if (wejscie == 2) {
			cout << "[1] Kwadratu\n[2] Prostokatu\n";
			cin >> wejscie;
			if (wejscie == 1)
			{
				int x;
				cin >> x;
				obwkwadratu(x);
			}
			else if (wejscie == 2) {
				int x, y;
				cout << "Podaj wymiary:\n Długosc: ";
				cin >> x;
				cout << "Szerokosc: ";
				cin >> y;
				obwprostokatu(x, y);
			}
		}
	} while (wejscie!=0);
}







/*#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int komora = rand()%6+1;
	cout << "komora to: " << komora << endl;
	int x1 = rand() % 6 + 1;
	int x2 = rand() % 6 + 1;
	do
	{
		int x1 = rand() % 6 + 1;
		cout << "komora gracza 1 = " << x1 << endl;
		int x2 = rand() % 6 + 1;
		cout << "komora gracza 2 = " << x2 << endl;

		if ((x1 == komora) || (x2 == komora))
		{
			if (x1 == komora)
			{
				cout << "nie zyje gracz 1";
				break;
			}
			if (x2 == komora)
			{
				cout << "nie zyje gracz 2";
				break;
			}
		}
	} while ((x1 != komora) || (x2 != komora));


}*/
