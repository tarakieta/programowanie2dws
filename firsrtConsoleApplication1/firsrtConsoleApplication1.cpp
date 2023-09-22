#define _USE_MATH_DEFINES
#include <iostream>

void test()
{
    std::cout << "Hello World!\n";
    std::cout << -59.5 << 'x' << "ghfghjfghj" << true << false << '\n';

    //typ nazwa;
    int number;
    number = 5;

    int secondNumber;
    secondNumber = number + 2;
    /*
    Priorytet operatorów:

    (, )
    +, - (unarne)
    *, /, %
    +, -
    =

    */
    std::cout << "Komuinikat \n";
    std::cin >> secondNumber >> number;
}

/*
Podstawy programowania:

1.
2. Program obliczaj¹cy pole prostok¹ta.
3. Program obliczaj¹cy objêtoœæ sto¿ka.
4. Program obliczaj¹cy pole ko³a.
5. Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2
6. Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h
7. Program obliczaj¹cy objêtoœæ kuli o promieniu r
8. Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h
9. Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*/

//Program obliczaj¹cy œredni¹ arytmetyczn¹ dwóch liczb.
void task1()
{
    double firstNumber, secondNumber;
    std::cout << "Podaj pierwsz¹ liczbê:\n";
    std::cin >> firstNumber;
    std::cout << "Podaj drug¹ liczbê:\n";
    std::cin >> secondNumber;

    double avarageOfNumbers = (firstNumber + secondNumber) / 2;

    std::cout << "Œrednia tych liczb to: " << avarageOfNumbers << "\n";
}

//Program obliczaj¹cy pole prostok¹ta:
void task2()
{

    double a, b;

    std::cout << "Podaj ";

}

int main()
{
    setlocale(LC_CTYPE, "polish");
    //test();
    task1();
    //task2();
}
