#include <iostream>
#include <windows.h>

using namespace std;

double grubosc=0.00000001; double odleglosc=384400; int zlozenia = 0; int odpowiedz; bool chciec;
int main()
{
    cout << "Ksiezycowa zagadka!" << endl;
    cout << endl;
    Sleep (500);
    cout << "Gdybys mogl zlozyc gazete na pol- dowolna ilosc razy jaka chcesz ile razy wystarczyloby aby gazeta dosiegnela ksiezyca?" << endl;
    Sleep (1000);
    cout << "Dopuszczalny margines bledu to 4!" << endl;
    cout << endl;
    cout << "Twoja odpowiedz:";
    cin >> odpowiedz;
    cout << endl;

    if (odpowiedz<=50&& odpowiedz>=42&& odpowiedz!=46)
    {
        cout <<"Przyjety dopuszczalny margines bledu to 4" <<endl;
        cout <<endl;
        Sleep (1500);
        cout <<"BRAWO- zmiesciles sie w przewidzianym marginesie bledu!!! Dokladna odpowiedz 46.." << endl;
    }

    if (odpowiedz==46)
    {
        Sleep (1500);
        cout <<"GRATULUJE- to jest poprawna odpowiedz!!!" <<endl;
    }

    if (odpowiedz>=51|| odpowiedz<=41&& odpowiedz!=46)
    {
        Sleep (1500);
         cout <<"Niestety nie- prawidlowa odpowiedz to 46, a dopuszczalny, przyjety margines bledu wynosi 4 " <<endl;
    }

    Sleep (3000);
    cout <<endl;

    cout <<"Czy chcesz zobaczyc obliczenia- 1- tak, 0- nie?" <<endl;
    cin >> chciec;

    if (chciec == 1)
    {
        cout << "grubosc gazety to 0.1 mm- czyli 0.00000001 km , odleglosc ksiezyca od Ziemi wynosi 3844000km" << endl;
        Sleep (1000);
        cout <<endl;
        cout << "Kazde zlozenie gazety powoduje podwojenie jej poprzedniej grubosci, a wiec po pierwszym zlozeniu grubosc gazety wyniesie 0,2 mm, czyli 0.00000002 km, po 2 zlozeniu bedzie to juz 0,4mm itd..";
        Sleep (10000);
        cout << endl;
        cout << endl;
        cout <<"Uruchamiam symulacje zlozen gazety" << endl;
        cout << endl;
        cout << endl;
        cout << endl;

        Sleep(2000);
        while (grubosc<= odleglosc)
        {
            zlozenia++;
            grubosc= grubosc*2;

            cout <<"Ilosc zlozen gazety:" <<zlozenia; cout <<"       ";
            cout <<" Grubosc gazety:"<< grubosc<< endl;
        }
    }

    else
    {
        Sleep(1000);
        cout <<"hmmm..." << endl;
        Sleep (2000);
        cout <<"Ok- wierzysz mi na slowo..." << endl;
        Sleep (1500);
        cout <<"Dziekuje- to mile!" << endl;
    }

    return 0;
}

