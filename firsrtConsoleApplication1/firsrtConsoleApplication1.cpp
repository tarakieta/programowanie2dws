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
    Priorytet operator�w:

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
2. Program obliczaj�cy pole prostok�ta.
3. Program obliczaj�cy obj�to�� sto�ka.
4. Program obliczaj�cy pole ko�a.
5. Program obliczaj�cy warto�� wyra�enia a^2 + b^2
6. Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h
7. Program obliczaj�cy obj�to�� kuli o promieniu r
8. Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h
9. Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*/

//Program obliczaj�cy �redni� arytmetyczn� dw�ch liczb.
void task1()
{
    double firstNumber, secondNumber;
    std::cout << "Podaj pierwsz� liczb�:\n";
    std::cin >> firstNumber;
    std::cout << "Podaj drug� liczb�:\n";
    std::cin >> secondNumber;

    double avarageOfNumbers = (firstNumber + secondNumber) / 2;

    std::cout << "�rednia tych liczb to: " << avarageOfNumbers << "\n";
}

//Program obliczaj�cy pole prostok�ta:
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
