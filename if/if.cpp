#include <iostream>
using namespace std;

/*

1.
2. Program sprawdzający czy podana liczba jest dodatnia, ujemna czy równa zero
3. Program sprawdzający czy podany rok jest rokiem przestępnym
4. Program wyświetlający odpowiedni komunikat w zależności od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
5. Program sprawdzający czy podane hasło jest poprawne (np. jeśli hasło jest "abc123", program powinien wyświetlić "hasło poprawne", jeśli jest inne, powinien wyświetlić "hasło niepoprawne").
6. Program sprawdzający czy podana data jest poprawna (np. sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)
7. Program wyświetlający odpowiedni komunikat w zależności od podanej temperatury (np. "ciepło" dla temperatury powyżej 20 stopni Celsjusza, "chłodno" dla temperatury poniżej 10 stopni Celsjusza itd.)
8. Program sprawdzjący czy podana liczba jest z przediału <1;15)
9. Program sprawdzający czy osoba jest pełnoletnia.
10. Program, który sprawdzi czy z podanych długości boków można zrobić trójkąt.
11. Napisz program, który będzie działać jako prosty kalkulator matematyczny, umożliwiając użytkownikowi wybór operacji (dodawanie, odejmowanie, mnożenie, dzielenie) i wprowadzanie liczb do obliczeń.
12. Napisz program, który wczyta numer miesiąca i wyświetli jego słowny odpowiednik.
13. Napisz program, który na podstawie współczynników równania kwadratowego (a, b, c) sprawdzi, czy to równanie ma rozwiązania rzeczywiste, i jeśli tak, to je obliczy.

*/


//Program sprawdzający czy podana liczba jest dodatnia, ujemna czy równa zero
void task1()
{
    int Number;
    cout << "Podaj liczba:\n";
    cin >> Number;
    double endNumber = Number & 2;
    if (endNumber == 0) {

        cout << "Liczba jest parzysta";
    }
    else {
        cout << "Liczba jest nieparzysta";
    }

}
//Program sprawdzający czy podany rok jest rokiem przestępnym
void task2()
{
    int Number;
    cout << "Podaj liczbe:\n";
    cin >> Number;
    double endNumber = Number & 4;
    if (endNumber == 0) {

        cout << "Rok jest przestepny";
    }
    else {
        cout << "Rok jest nieprzestepny";
    }

}
//Program sprawdzający czy podany rok jest rokiem przestępnym
void task3() 
{
    int rok ,test;

    std::cout << "Podaj rok: ";
    std::cin >> rok;

    test = rok & 4;
    if (test == 0) {
        cout << "Rok jest przestępny";
    }
    else {
        cout << "Rok jest nieprzestępny";
    }
    
    }

void task4()
{
    int Number;
    cout << "Podaj ocene:\n";
    cin >> Number;
    if (Number == 1) {

        cout << "Niedostateczny";
    }
    if (Number == 2) {

        cout << "Dopuszczajacy";
    }
    if (Number == 3) {

        cout << "Dostateczny";
    }
    if (Number == 4) {

        cout << "Dobry";
    }
    if (Number == 5) {

        cout << "Bardzo dobry";
    }
    if (Number == 6) {

        cout << "Celujacy";
    }
}

void task5()
{
    int password;

    std::cout << "Podaj haslo:\n";
    std::cin >> password;

    if (password == 123)
    {
        std::cout << "poprawne haslo";
    }
    else
    {
        std::cout << "haslo niepoprawne";
    }
}

void task7()
{
    int day, month, year;
    std::cout << "Podaj rok:\n";
    std::cin >> year;
    std::cout << "Podaj miesiac:\n";
    std::cin >> month;
    std::cout << "Podaj dzien:\n";
    std::cin >> day;

    bool date = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

    if (day < 1
        || day >  31

        || month < 1
        || month < 12

        || (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11))

        || (month == 2 && day > 29)

        || (month == 2 && day > 29 && date)
        )
    {
        std::cout << "data jest nie poprawana\n";
    }
    else
    {
        std::cout << "poprawna data\n";
    }
}
void task8()
{
    double temp;
    std::cout << "podaj temperaturen\n";
    std::cin >> temp;
    if (temp >= 10 && temp < 20)
    {
        std::cout << "cieplo";
    }
    else if (temp >= 20)
    {
        std::cout << "goraco";
    }
    else if (temp >= 0 && temp < 10)
    {
        std::cout << "chlodno";
    }
    else if (temp < 0)
    {
        std::cout << "zimno";
    }
}

void task9()
{
    int number;
    std::cout << "podaj liczbe:\n";
    std::cin >> number;
    if (number >= 1 && number <15)
    {
        std::cout << "podana liczba jest z przedzialu <1;15)";
    }
    else
    {
        std::cout << "podana liczba nie jest z przedzialu <1;15)";

    }
}

void task10()
{
    int age;
    std::cout << "podaj wiek:\n";
    std::cin >> age;
    if (age >= 18)
    {
        std::cout << "jestes pelnoletni";
    }
    else
    {
        std::cout << "nie jestes pelnoletni";

    }
}

void task11()
{
    int side1, side2, base;
    std::cout << "Podaj pierwsze ramie:\n";
    std::cin >> side1;
    std::cout << "Podaj drugie ramie:\n";
    std::cin >> side2;
    std::cout << "Podaj podstawe:\n";
    std::cin >> base;
    if (base >= 1 && side1 >= 1 && side2 >= 1)
    {
        std::cout << "z tych bokow mozna zrobic trojkat";
    }
    else
    {
        std::cout << "z tych bokow nie mozna zrobic trojkata";
    }
}
//Napisz program, który wczyta numer miesiąca i wyświetli jego słowny odpowiednik
void task12() {

    int miesiac;

    cout << "Wpisz miesiac:" << endl;
    cin >> miesiac;

    switch (miesiac) {
    case 1:
        cout << "Jest styczen";
            break;
    case 2:
        cout << "Jest luty";
        break;

    case 3:
        cout << "Jest marzec";
        break;

    case 4:
        cout << "Jest kwiecien";
        break;

    case 5:
        cout << "Jest maj";
        break;

    case 6:
        cout << "Jest czerwiec";
        break;

    case 7:
        cout << "Jest lipiec";
        break;

    case 8:
        cout << "Jest spierpien";
        break;

    case 9:
        cout << "Jest wrzesien";
        break;

    case 10:
        cout << "Jest pazdziernik";
        break;

    case 11:
        cout << "Jest listopad";
        break;

    case 12:
        cout << "Jest grudzien";
        break;
    }
}

void task13() 
{
    int;
}
int main()
{
    setlocale(LC_CTYPE, "polish");

    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7();
    //task8();
    //task9();
    //task10();
    //task11();
    //task12();
    //task13();
}