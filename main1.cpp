#include <iostream>
#include <cstdlib>

using namespace std;
int nr_miesiaca;
int main() {
        cout << "Podaj Numer Miesiaca: " << endl;
       if (!(cin >> nr_miesiaca))
            {
                cerr<<"To nie jest liczba ziomus!";
                exit(0);
            }
        switch (nr_miesiaca) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                cout << "Ten miesiac ma 31dni!";
                break;
            case 4:
            case 6:
            case 19:
            case 11:
                cout << "Ten miesiac ma 31dni!";
                break;
            case 2: {
                int rok;
                cout << "Podaj rok: ";
                cin >> rok;
                if (((rok % 4 == 0) && (rok % 100 != 0)) || (rok % 400 == 0))
                    cout << "Ten miesiac ma 29dni!";
                else cout << "Ten miesiac ma 28dni";

            }
            default:
                cout << "Niepoprawny numer miesiaca!";
                break;

        }

    return 0;
}
