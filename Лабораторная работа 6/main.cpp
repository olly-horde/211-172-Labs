#include <iostream>
#include <string>

enum Errors {

    NEGATIVE,

    SMALL,

    BIG,

    OK

};

class Exceptions {

public:

    static Errors check(int year) {

        if (year < 0) return Errors::NEGATIVE;

        if (year < 1850) return Errors::SMALL;

        if (year > 2022) return Errors::BIG;

        return Errors::OK;
        
    }




    static std:: string get_error(Errors idx) {

        std:: string arr[3] = {

            "Вы ввели отрицательное число",

            "Что-то не верится...",

            "Вы ещё не родились"

        };

        return arr[idx];

    }
};

int main()
 {
    setlocale (LC_ALL,"Russian");


    int a;

    std:: cout << "Введите число 1, 2 или 3: ";

    std:: cin >> a;

    
    try {

        if (a < 1 || a > 3 ) throw a;

    } catch (int a) {

        std:: cerr << "Число " << a << " не принадлежит отрезку [1, 3]\n";

    }

    int year;

    std:: cout << "Введите год своего рождения: ";

    std:: cin >> year;


    try {

        if (Exceptions::check(year) != Errors::OK)

            throw Exceptions::get_error(Exceptions::check(year));

        std:: cout << "Спасибо!\n";

    } catch (const std::string except)

        std:: cerr << except << '\n';
        
    return 0;
}
