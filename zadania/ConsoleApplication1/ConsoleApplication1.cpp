#include <iostream>
using namespace std;

class Count {
private:
    double number;
public:
    void add(double addingNumber) {
        number += addingNumber;
    }

    void substract(double substractNumber) {
        number -= substractNumber;
    }

    Count() : number(0) {}

    Count(double oneParameter) : number(oneParameter) {}

    double getNumber() const {
        return number;
    }
};

class Sumator {
private:
    int numbers[10];
public:
    Sumator() {
        for (int i = 0; i < 10; i++) {
            numbers[i] = 0;
        }
    }

    Sumator(int maxValue) {
        for (int i = 0; i < 10; i++) {
            numbers[i] = rand() % (maxValue + 1);
        }
    }

    double Sum() const {
        double sum = 0;
        for (int i = 0; i < 10; i++) {
            sum += numbers[i];
        }
        return sum;
    }

    double SumDivide3() const {
        double sum = 0;
        for (int i = 0; i < 10; i++) {
            if (numbers[i] % 3 == 0) {
                sum += numbers[i];
            }
        }
        return sum;
    }

    void showInfo() const {
        for (int i = 0; i < 10; i++) {
            cout << i << ". " << numbers[i] << endl;
        }
    }

    void showElementsInRange(int lowIndex, int highIndex) const {
        if (lowIndex < 0) {
            lowIndex = 0;
        }

        if (highIndex >= 10) {
            highIndex = 9;
        }

        for (int i = lowIndex; i <= highIndex; i++) {
            cout << "numbers[" << i << "] = " << numbers[i] << endl;
        }
    }
};

class Person {
private:
    string firstName;
    string lastName;
    int age;

public:
    Person(string firstName, string lastName, int age)
        : firstName(firstName), lastName(lastName), age(age) {}

    void Print() const {
        cout << "First Name: " << firstName << ", Last Name: " << lastName << ", Age: " << age << endl;
    }
};

class Book {
private:
    string title;
    Person author;
    int publicationYear;

public:
    Book(string title, Person author, int publicationYear)
        : title(title), author(author), publicationYear(publicationYear) {}

    void Print() const {
        cout << "Title: " << title << ", Author: ";
        author.Print();
        cout << "Publication Year: " << publicationYear << endl;
    }
};

int main() {
    // Zad 1
    Count counter;
    counter.add(5.0);

    cout << "Current number: " << counter.getNumber() << "." << endl;

    // Zad 2
    Sumator cat;
    Sumator dog(100);

    cout << "Elements of sumator without parameters: " << endl;
    cat.showInfo();

    cout << "Elements of sumator with parameters: " << endl;
    dog.showInfo();

    cout << "Elements of sumator in range 4-7" << endl;
    dog.showElementsInRange(6, 9);

    cout << "Sum of elements of second sumator (with parameters): " << dog.Sum() << endl;
    cout << "Sum of elements of second sumator (with parameters) that can be divided by 3: " << dog.SumDivide3() << endl;

    // Zad 3
    Person author1("Kate", "White", 45);
    Person author2("Randy", "Black", 37);

    Book book1("C++ Programming", author1, 2017);
    Book book2("Advanced C++", author2, 2023);

    cout << "Book 1 Details:" << endl;
    book1.Print();

    cout << "Book 2 Details:" << endl;
    book2.Print();

    return 0;
}

