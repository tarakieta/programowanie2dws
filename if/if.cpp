#include <iostream>
using namespace std;

/*
6. Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
7. Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej temperatury (np. "ciep³o" dla temperatury powy¿ej 20 stopni Celsjusza, "ch³odno" dla temperatury poni¿ej 10 stopni Celsjusza itd.)
8. Program sprawdzj¹cy czy podana liczba jest z przedia³u <1;15)
9. Program sprawdzaj¹cy czy osoba jest pe³noletnia.
10. Program, który sprawdzi czy z podanych d³ugoœci boków mo¿na zrobiæ trójk¹t.
*/


//Napisz funkcjê, która podzieli dwie liczby.
void task0()
{
    int firstNumber, secondNumber;

    cout << "Podaj pierwsz¹ liczbê:\n";
    cin >> firstNumber;
    cout << "Podaj drug¹ liczbê (byle nie zero):\n";
    cin >> secondNumber;

    if (secondNumber != 0)
    {
        double quotient = firstNumber / secondNumber;
        cout << "Wynik dzielenia: " << quotient << "\n";
    }
    else
    {
        cout << "Dzielenie przez zero!!!\n";
    }
}

//Program sprawdzaj¹cy czy podana liczba jest parzysta czy nieparzysta
void task1()
{
    int Number;
    cout << "Podaj liczbê:\n";
    cin >> Number;
    double endNumber = Number & 2;
    if (endNumber == 0) {

        cout << "Liczba jest parzysta";
    }
    else {
        cout << "Liczba jest nieparzysta";
    }

}
void task2()
{
    int Number;
    cout << "Podaj liczbê:\n";
    cin >> Number;
    double endNumber = Number & 4;
    if (endNumber == 0) {

        cout << "Rok jest przestêpny";
    }
    else {
        cout << "Rok jest nieprzestêpny";
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

        cout << "Dopuszczaj¹cy";
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

        cout << "Celuj¹cy";
    }
}
void task5()
{
    char haslo = "abc123";
    cout << "Podaj has³o:\n";
    char input;
    cin >> input;

    if (input = haslo) {

        cout << "Haslo jest poprawne";
    }
    else {
        cout << "Haslo nie jest poprawne";
    }
}

//Program sprawdzaj¹cy czy podana liczba jest dodatnia, ujemna czy równa zero
void task3()
{
    double NumberToCheck;

    std::cout << "Podaj liczbê ktora chcesz sprawdzic:\n";
    std::cin >> NumberToCheck;

    if (NumberToCheck < 0)
    {
        std::cout << "Liczba (" << NumberToCheck << ") jest ujemna";
    }
    else if (NumberToCheck > 0)
    {
        std::cout << "Liczba (" << NumberToCheck << ") jest dodatnia";
    }
    else
    {
        std::cout << "Liczba (" << NumberToCheck << ") jest rowna 0";
    }
}



//Program sprawdzaj¹cy czy podane has³o jest poprawne (np. jeœli has³o jest "abc123", program powinien wyœwietliæ "has³o poprawne", jeœli jest inne, powinien wyœwietliæ "has³o niepoprawne").
void task6()
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
        std::cout << "has³o niepoprawne";
    }
}
//Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
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
}//Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej temperatury (np. "ciep³o" dla temperatury powy¿ej 20 stopni Celsjusza, "ch³odno" dla temperatury poni¿ej 10 stopni Celsjusza itd.)
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
//8. Program sprawdzj¹cy czy podana liczba jest z przedia³u <1;15)
void task9()
{
    int number;
    std::cout << "podaj liczbe:\n";
    std::cin >> number;
    if (number >= 1 && number < if (number >= 1 && number < 15)
    {
        std::cout << "podana liczba jest z przedzialu <1;15)";
    }
    else
    {
        std::cout << "podana liczba nie jest z przedzialu <1;15)";

    }
}
//9. Program sprawdzaj¹cy czy osoba jest pe³noletnia.
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
//10. Program, który sprawdzi czy z podanych d³ugoœci boków mo¿na zrobiæ trójk¹t.
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

}