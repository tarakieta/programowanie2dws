#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cmath>
#define M_PI

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

    std::cout << "Podaj pierwszy bok: ";
    std::cin >> a;
    std::cout << "Podaj drugi bok: ";
    std::cin >> b;

    double areaofrectangle = (a * b);

    std::cout << "Pole prostok�ta wynosi: " << areaofrectangle << "\n";

}

//Program obliczaj�cy obj�to�� sto�ka:
void task3()
{

    double r, H, V;

    float pi = 3.141;

    std::cout << "Podaj promie�: \n";
    std::cin >> r;
    std::cout << "Podaj wysoko��: \n";
    std::cin >> H;

    V = (pi * r * r) * (H / 3);

    std::cout << "Objetosc wynosi: " << V;

}

//Program obliczaj�cy pole ko�a:
void task4()
{

    double r, areaofcircle;

    float pi = 3.141;

    std::cout << "Podaj promie� ko�a: \n";
    std::cin >> r;
    
    areaofcircle = (pi * r * r);

    std::cout << "Pole ko�a wynosi: "<< areaofcircle <<"\n";

}

//Program obliczaj�cy warto�� wyra�enia a^2 + b^2:
void task5()
{

    double a, b, answer;

    std::cout << "Podaj a: ";
    std::cin >> a;
    std::cout << "Podaj b: ";
    std::cin >> b;

    answer = (a * a) + (b * b);

}

//Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h:
void task6()
{

    double a, h, areaoftriangle;

    
    std::cout << "Podaj d�ugo�� boku tr�jk�ta: ";
    std::cin >> a;
    std::cout << "Podaj wysoko�� tr�jk�ta: ";
    std::cin >> h;
   
    areaoftriangle = (a * h) /2;

    std::cout << "Pole trojk�ta wynosi: " << areaoftriangle << "\a";

}

//Program obliczaj�cy obj�to�� kuli o promieniu r:
void task7()
{

    double r, volumeofthesphere;

    float pi = 3.141;

    std::cout << "Podaj r kuli: ";
    std::cin >> r;

    volumeofthesphere = (4 / 3) * (pi * r);

    std::cout << "Obj�to�� kuli wynosi: " << volumeofthesphere << "\n";

}

//Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h:
void task8()
{

    double a, b, h, areaoftrapezoid;

    std::cout << "Podaj a: ";
    std::cin >> a;
    std::cout << "Podaj b: ";
    std::cin >> b;
    std::cout << "Podaj wysoko��: ";
    std::cin >> h;

    areaoftrapezoid = (a + b) * h/2;

    std::cout << "Pole trapezu wynosi: " << areaoftrapezoid << "\n";

}

//Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3:
void task9()
{

    double liczba1, liczba2, liczba3, w1, w2, w3;
    
    std::cout << "Podaj pierwsz� liczbe: ";
    std::cin >> liczba1;
    std::cout << "Podaj wage pierwszej liczby: ";
    std::cin >> w1;
    std::cout << "Podaj drug� liczbe: ";
    std::cin >> liczba2;
    std::cout << "Podaj wage drugiej liczby: ";
    std::cin >> w2;
    std::cout << "Podaj trzeci� liczbe: ";
    std::cin >> liczba3;
    std::cout << "Podaj wage trzeciej liczby: ";
    std::cin >> w3;
    
    double �rednialiczb = (liczba1 * w1 + liczba2 * w2 + liczba3 * w3) / (w1 + w2 + w3);

    std::cout << "�rednia wa�ona liczb wynosi: " << �rednialiczb <<"\n";

}

int main()
{
    setlocale(LC_CTYPE, "polish");
    //test();
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7();
    //task8();
    //task9();

}
