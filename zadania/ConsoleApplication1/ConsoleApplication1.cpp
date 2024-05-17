#include <iostream> 
#include <string>
using namespace std;

void task1()
{
    class Count
    {
    private:
        int value;

    public:

        Count() : value(0) {}


        Count(int value) : value(value) {}


        void add(int number)
        {
            value += number;
        }

        void deduct(int number)
        {
            value -= number;
        }


        int getValue() const {
            return value;
        }

    };

    Count count1;
    Count count2(10);

    count1.add(5);
    count2.deduct(3);

    std::cout << "Licz 1: " << count1.getValue() << "\n";
    std::cout << "Licz 2: " << count2.getValue() << "\n";

    count1.deduct(2);
    count2.add(8);

    std::cout << "Licz 1 po dalszych operacjach : " << count1.getValue() << "\n";
    std::cout << "Licz 2 po dalszych operacjach : " << count2.getValue() << "\n";
}

void task2()
{
    class sumator
    {
    private:
        const int size = 10;
        int numbers[10];

    public:

        sumator()
        {
            for (int i = 0; i < size; ++i)
            {
                numbers[i] = 0;

            }
        }

        sumator(int maxValue)
        {
            std::srand(std::time(nullptr));
            for (int i = 0; i < size; ++i)
            {
                numbers[i] = std::rand() % (maxValue + 1);
            }
        }

        int sum() const
        {
            int sum = 0;
            for (int i = 0; i < size; i++)
            {
                sum += numbers[i];
            }
            return sum;
        }

        int sumDivide() const
        {
            int sum = 0;
            for (int i = 0; i < size; i++)
            {
                if (numbers[i] % 3 == 0)
                {
                    sum += numbers[i];
                }
            }
            return sum;
        }

        void writeAllElements() const
        {
            for (int i = 0; i < size; ++i)
            {
                std::cout << numbers[i] << " ";
            }
            std::cout << "\n";
        }

        void writeAllElementsInRange(int lowIndex, int HighIndex) const
        {
            for (int i = std::max(0, lowIndex); i <= std::min(size - 1, HighIndex); ++i)
            {
                std::cout << numbers[i] << " ";
            }
            std::cout << "\n";
        }
    };

    sumator sumator1;
    sumator sumator2(50);

    std::cout << "Sumator1: " << "\n";
    sumator1.writeAllElements();
    std::cout << "Suma wszystkich elemtnow: " << sumator1.sum() << "\n";
    sumator2.writeAllElementsInRange(2, 7);

    std::cout << "Sumator2: " << "\n";
    sumator2.writeAllElements();
    std::cout << "Suma wszystkich elemtnow: " << sumator2.sum() << "\n";
    std::cout << "Suma elementow podzielnych przez 3: " << sumator2.sumDivide() << "\n";
    sumator2.writeAllElementsInRange(2, 7);

}

void task3()
{
    class person
    {
    private:
        string name;
        string surname;
        int age;

    public:
        person(string name, string surname, int age)
            : name(name), surname(surname), age(age) {}

        void write() const
        {
            std::cout << "Imie:" << name << ", Nazwisko: " << surname << ", age: " << age << "\n";
        }

        string getName() const
        {
            return name;
        }

        string getSurname() const
        {
            return surname;
        }

    };

    class book
    {
    private:
        string title;
        person author;
        string publish_date;

    public:
        book(string title, person author, string publish_date)
            : title(title), author(author), publish_date(publish_date) {}

        void type() const
        {
            std::cout << "tytul: " << title << ", Autor: " << author.getName() << " " << author.getName() << ", data wydania: " << publish_date << "\n";
        }
    };

    person author1("Adam", "Mickiewicz", 58);
    person author2("Henryk", "Sienkiewicz", 70);

    book book1("Pan Tadeusz", author1, "1834");
    book book2("Quo Vadis", author2, "1896");
}

int main()
{
    //task1();
    //task2();
    task3();
}


