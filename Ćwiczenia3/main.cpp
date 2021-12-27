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
    for (int i = 1; i <= n; i++)                                                                    //
    {
        cout << i << setw(4);                                                                       //
    }                                                                                               //
    cout << endl;                                                                                   //
    for (int i = 1; i <= n; i++)                                                                    //
    {
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
    cout << "\n\n\n" << endl;
    cout << "-------------" << endl;
    cout << "- Zadanie 2 -" << endl;
    cout << "-------------" << endl;
    int N;
    double a, h, x, wartoscFunkcji = 0;
    cout << "\nProgram wyswietli kolejne wartosci funkjci y(x)= 3*x^2+3*x-1.\n" << endl;
    cout << "\nPodaj punkt poczatkowy x: ";
    cin >> a;
    cout << "\nPodaj krok h: ";
    cin >> h;
    do                                                                                              //zabezpieczenie przed wpisaniem wartosci mniejszej od 0
    {
        cout << "\nPodaj liczbe krokow (nieujemna liczbe calkowita): ";
        cin >> N;
    }
    while (N < 0);
    for (int i = 0; i <= N; i++)
    {
        x = a + (i*h);                                                                              //wyliczenie wartosci x dla kolejnych krokow N
        wartoscFunkcji += (3*(x*x))+(3*x)-1;                                                        //wyliczenie wartosci funkcji dla kolejnych x i dodanie jej do zmiennej wartoscFunkcji
    }
    cout << endl;
    cout << "()()()()()()()()()()()()()()" << endl;
    cout << "()Wartosc funkcji: " << wartoscFunkcji << " ()" << endl;
    cout << "()()()()()()()()()()()()()()" << endl;
    cout << "\n\n\n" << endl;
    cout << "-------------" << endl;
    cout << "- Zadanie 3 -" << endl;
    cout << "-------------" << endl;
    int tab[100], pomocnicza = 0;                                                                   //wydaje mi sie, ze wlasnie tablicami powinienem to zrobic, musze zadeklarowac jej wielkosc (dlatego 100) lub kombinowac z tablica dynamiczna ale nie czuje sie jeszcze na tyle komfortowo
    double srednia = 0;
    cout << "\nProgram policzy srednia podanych wartosci (nie moze byc ich wiecej niz 100)." << endl;
    cout << "Aby wczesniej zakonczyc wprowadzanie wartosci wpisz 0." << endl;
    for (int i = 0; i < 100; i++)                                                                   //wypelnianie tablicy
    {
        cin >> tab[i];
        if (tab[i] == 0)                                                                            //jesli uzytkownik wprowadzi 0, to przerywam wypelnianie tablicy
        {
            break;
        }
        pomocnicza++;
    }
    for (int j = 0; j < pomocnicza; j++)                                                            //sumowanie wpisanych wartosci
    {
        srednia += tab[j];
    }
    cout << "Srednia podanych liczb wynosi: " << srednia/pomocnicza << endl;                        //liczenie i wypisywanie sredniej
    cout << "\n\n\n" << endl;
    cout << "-------------" << endl;
    cout << "- Zadanie 4 -" << endl;
    cout << "-------------" << endl;
    double sumaS = 0, licznik, mianownik;                                                           //deklaruje zmienne licznik i mianownik, zeby latwiej przeprowadzac operacje, bez nich nie liczylo mi sumy
    int m;
    cout << "\nProgram obliczy sume (1+j)/(2*(j^3)+3), dla j = 0, 1, 2, ... , m." << endl;
    cout << "Prosze podac liczbe m (nieujemna liczba calkowita): ";
        cin >> m;
    while (m < 0)                                                                                              //zabezpieczenie przed wpisaniem wartosci mniejszej od 0
    {
        cout << "Zostala podana bledna liczba" << endl;
        cout << "Prosze podac liczbe m (nieujemna liczba calkowita): ";
        cin >> m;
    }
    for (int j = 0; j <= m; j++)                                                                    //liczenie sumy
    {
        licznik = (1+j);
        mianownik = ((2*(j*j*j))+3);
        sumaS += licznik/mianownik;
    }
    cout << "Suma dla j = 0, 1, 2, ..., " << m << " wynosi: " << sumaS << endl;
    return 0;
}
