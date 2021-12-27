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
    while (m < 0)                                                                                   //zabezpieczenie przed wpisaniem wartosci mniejszej od 0
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
    cout << "\n\n\n" << endl;
    cout << "-------------" << endl;
    cout << "- Zadanie 5 -" << endl;
    cout << "-------------" << endl;
    string nazwaHotelu;
    char czyKontynuowac;
    int liczbaPieter, pietroBezPokoi, pomocnicza1, pomocnicza2;
    double liczbaPokoiZajetych = 0, liczbaPokoi = 0;
    do
    {
        cout << "Prosze podac nazwe hotelu: ";
        cin >> nazwaHotelu;
        cout << "Prosze podac liczbe pieter: ";
        cin >> liczbaPieter;
        while (liczbaPieter < 1)                                                //taki warunek, bo bez sensu bylby hotel skladajacy sie tylko z recepcji i nie majacy pokoi
        {
            if (liczbaPieter == 0)                                              //przypadek, jesli ktos wprowadzil 0
            {
                cout << "\nNa pietrze numer 0 nie ma pokoi. Prosze podac poprawna liczbe pieter: ";
                cin >> liczbaPieter;
            }
            else                                                                //pozostale przypadki
            {
                cout << "\nLiczba pieter nie moze byc mniejsza od 0. Prosze podac poprawna liczbe pieter: ";
                cin >> liczbaPieter;
            }
        }
        cout << "Prosze podac numer pietra bez pokoi: ";
        cin >> pietroBezPokoi;
        while (pietroBezPokoi <= 1)                                             //tutaj <=, zeby w momencie gdy hotel ma tylko jedno pietro, a ktos wprowadzi, ze nie ma na nim pokoi, to wypisuje odpowiedni komunikat
        {
            if (liczbaPieter == pietroBezPokoi)                                 //przypadek wspomniany w komentarzu wyzej
            {
                cout << "\nTo nie jest hotel, jesli ma tylko jedno pietro i nie ma na nim pokoi." << endl;
                cout << "Jesli w hotelu tylko parter nie ma pokoi to wpisz 0." << endl;
                cout << "Podaj poprawny numer pietra bez pokoi: ";
                cin >> pietroBezPokoi;
            }
            else if (pietroBezPokoi == 0)                                       //mozliwosc wpisania tylko parteru jako pietra bez pokoi
            {
                cout << "\nTylko parter nie ma pokoi." << endl;
                break;                                                          //wyjscie poza petle while
            }
            else if (pietroBezPokoi < 0)
            {
                cout << "\nPietro bez pokoi nie moze byc liczba ujemna." << endl;
                cout << "Jesli w hotelu tylko parter nie ma pokoi to wpisz 0." << endl;
                cout << "Podaj poprawny numer pietra bez pokoi: ";
                cin >> pietroBezPokoi;
            }
            else                                                                //zadeklarowanie wyzszego pietra niz zostalo zadeklarowane w zmiennej liczbaPieter
            {
                cout << "\nHotel ma mniej pieter." << endl;
                cout << "Jesli w hotelu tylko parter nie ma pokoi to wpisz 0." << endl;
                cout << "Podaj poprawny numer pietra bez pokoi: ";
                cin >> pietroBezPokoi;
            }
        }
        while (pietroBezPokoi > liczbaPieter)                                   //zadeklarowanie wyzszego pietra niz zostalo zadeklarowane w zmiennej liczbaPieter
        {
            cout << "\nHotel ma mniej pieter." << endl;
            cout << "Podaj poprawny numer pietra bez pokoi: ";
            cin >> pietroBezPokoi;
        }
        for (int i = 1; i <= liczbaPieter; i++)
        {
            if (i == pietroBezPokoi)
            {
                cout << "\nPietro " << i << " zostalo zadeklarowane jako pietro bez pokoi." << endl;
                continue;
            }
            else
            {
                cout << "\nProsze podac liczbe pokoi na " << i << " pietrze: ";
                cin >> pomocnicza1;
                liczbaPokoi += pomocnicza1;
                cout << "Prosze podac liczbe zajetych pokoi na " << i << " pietrze: ";
                cin >> pomocnicza2;
                liczbaPokoiZajetych += pomocnicza2;
            }
        }
        cout << "\n\nDane dla hotelu " << nazwaHotelu << ":" << endl;
        cout << "- Hotel ma " << liczbaPokoi << " pokoi." << endl;
        cout << "- Jest w nim " << liczbaPokoiZajetych << " zajetych pokoi." << endl;
        cout << "- A wolnych jest " << liczbaPokoi-liczbaPokoiZajetych << " pokoi." << endl;
        cout << "- Pokoje zajete stanowia " << (liczbaPokoiZajetych/liczbaPokoi)*100 << "% wszsystkich pokoi w hotelu.\n\n" << endl;
        cout << "Czy powtorzyc obliczenia dla innego hotelu? (t/n)" << endl;
        cin >> czyKontynuowac;
    }
    while(czyKontynuowac == 't');
    return 0;
}
