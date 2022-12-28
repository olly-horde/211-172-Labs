#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>

#define PI 3.141592653589793

void read() {

    std::ifstream in("result.txt");

    std:: string line;

    while (getline(in, line)) std:: cout << line << '\n';

    in.close();

}

void erase() {

    std::ofstream out;

    out.open("result.txt", std::ofstream::out | std::ofstream::trunc);

    out.close();

}

void write(std:: string& st) {

    std:: ofstream out;

    out.open("result.txt", std::ios::app);

    out << st << '\n';

    out.close();

}

int main() {

    setlocale (LC_ALL,"Russian");

    std:: cout << "Введите радиус окружности: ";

    double r; std:: cin >> r;

    std:: cout << "Длниа окружности: " 

               << std::fixed << std::setprecision(3) << 2 * PI * r << '\n';
    
    while (true) {

        std:: cout << "Введите произвольную строку: ";

        std:: string st; std:: cin >> st;


        if (st == "exit") break;

        else if (st == "read") read();

        else if (st == "erase") erase();

        else write(st);
        
    }
    return 0;
}
