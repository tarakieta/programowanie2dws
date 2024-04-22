#include <iostream>
using namespace std;


void task1() {
    class Quadrangle
    {
    protected:
        double sideA, sideB, sideC, sideD, height;
    public:
        Quadrangle(double firstSide, double secondSide, double thirdSide, double fourthSide, double h)
        {
            sideA = firstSide;
            sideB = secondSide;
            sideC = thirdSide;
            sideD = fourthSide;
            height = h;
        }
    };

    class Rectangle : public Quadrangle
    {
    protected:

    public:
        Rectangle(double firstSide, double secondSide) : Quadrangle(firstSide, secondSide, firstSide, secondSide, secondSide)
        {
            //sideA = sideC = firstSide;
            //sideB = sideD = secondSide;
        }

        double GetArea()
        {
            return sideA * sideB;
        }

    };

    class Square : public Rectangle
    {
    protected:

    public:
        Square(double side) :Rectangle(side, side)
        {
            //sideA = sideB = sideC = sideD = side = height;
        }
    };

    class Trapeze : public Quadrangle
    {
    protected:

    public:
        Trapeze(double firstSide, double secondSide, double thirdSide, double fourthSide, double h)
            : Quadrangle(firstSide, secondSide, thirdSide, fourthSide, h)

        {
            //sideA = firstSide;
            //sideB = secondSide;
            //sideC = thirdSide;
            //sideD = fourthSide;
            //height = h;
        };

        double GetArea()
        {
            return(sideA + sideC) * height / 2;
        }
    };
};

/*

* Dla poni¿szych klas u³ó¿ drzewko dziedziczenia.
- Tiger (Tygrys), Dog (Pies), Fish (Ryba), Eagle (Orze³), Mammal (Ssak), Lion (Lew), Sparrow (Wróbel), Reptile (Gad), Trout (Pstr¹g), Cat (Kot), Salmon (£osoœ), Animal (Zwierzê), Snake (W¹¿), Bird (Ptak), Turtle (¯ó³w)
- SUV (SUV), Pickup Truck (Pick-up), Truck (Ciê¿arówka), Car (Samochód), Sedan (Sedan), Motorcycle (Motocykl), Vehicle (Pojazd), Semi-Truck (Ci¹gnik siod³owy)
- Smartphone (Smartfon), Android Phone (Telefon z systemem Android), Electronic Device (Urz¹dzenie elektroniczne), LED TV (Telewizor LED), Laptop (Laptop), iPhone (iPhone), Television (Telewizor), Smart TV (Telewizor Smart)
*/

//Napisz klasy, które bêd¹ opisywaæ kwadrat, prostok¹t, trapez

void task2() {

    class Animal
    {
    protected:
    public:
    };

    class Mammal : public Animal
    {
    protected:
    public:
    };

    class Reptile :public Animal
    {
    protected:
    public:
    };

    class Bird :public Animal
    {
    protected:
    public:
    };

    class Cat :public Animal
    {
    protected:
    public:
    };

    class Dog :public Mammal
    {
    protected:
    public:
    };

    class tiger :public Mammal
    {
    protected:
    public:
    };

    class Lion :public Cat
    {
    protected:
    public:
    };

    class Sparrow :public Bird
    {
    protected:
    public:
    };

    class Eagle :public Bird
    {
    protected:
    public:
    };

    class Fish :public Animal
    {
    protected:
    public:
    };

    class Trout :public Fish
    {
    protected:
    public:
    };

    class Salmon :public Fish
    {
    protected:
    public:
    };

    class Turtle :public Reptile
    {
    protected:
    public:
    };

    class Snake :public Reptile
    {
    protected:
    public:
    };

    class sedan
    {
    protected:
    public:
    };

    class Motorcycle
    {
    protected:
    public:
    };

    class Vehicle
    {
    protected:
    public:
    };

    class truck :public Vehicle
    {
    protected:
    public:
    };

    class car :public Vehicle
    {
    protected:
    public:
    };

    class SUV :public car
    {
    protected:
    public:
    };

    class pickupTruck : public truck
    {
    protected:
    public:
    };

    class semiTruck :public truck
    {
    protected:
    public:
    };

    class ElectronicDevice
    {
    protected:
    public:
    };

    class Television :public ElectronicDevice
    {
    protected:
    public:
    };

    class LEDTV :public Television
    {
    protected:
    public:
    };

    class Laptop :public ElectronicDevice
    {
    protected:
    public:
    };

    class Smartphone :public ElectronicDevice
    {
    protected:
    public:
    };

    class AndroidPhone :public Smartphone
    {
    protected:
    public:
    };

    class iPhone :public Smartphone
    {
    protected:
    public:
    };
};





int main()
{

    Quadrangle q(3, 2, 5, 4, 2);

    Rectangle r(10, 5);

    Square s(6);

    Trapeze t(10, 6, 4, 5, 3);
}