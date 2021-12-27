#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "-------------" << endl;
    cout << "- Zadanie 1 -" << endl;
    cout << "-------------" << endl;
    int n;
    cout << "\nProgram wyswietli tabliczke mnozenia do podanej przez Ciebie liczby.\n" << endl;
    do                                                                                              //te dwie petle do ... while sprawdza, czy podana liczba miesci sie w przedziale <1, 10>, jesli nie, to program poprosi o ponowne podanie liczby
    {
        do
        {
            cout << "Prosze podac liczbe z przedzialu <1, 10>: ";
            cin >> n;
        }
        while (n < 1);
    }
    while (n > 10);
    cout << setw(8);                                                                                //od tego miejsca...
    for (int i = 1; i <= n; i++){                                                                   //
        cout << i << setw(4);                                                                       //
    }                                                                                               //
    cout << endl;                                                                                   //
    for (int i = 1; i <= n; i++){                                                                   //
        cout << "_____";                                                                            //
    }                                                                                               //
    cout << endl;                                                                                   //
    cout << setw(4);                                                                                //...do tego, program wyœwietla linijki, tak, zeby wygladal jak w instrukcji do zadania
    for (int i = 1; i <= n; i++)
    {
        cout << i << " | ";                                                                         //kolejna czysto estetyczna linijka
        for (int j = 1; j <= n; j++)
        {
            cout << i*j << setw(4);                                                                 //wyswietlanie kolejnych wynikow mnozen
        }
        cout << endl;
    }
    return 0;
}
