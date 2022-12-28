#include <iostream>
#include <string>

int main() {

    setlocale (LC_ALL,"Russian");

    std:: string str;

    std:: cout << "Введите строку: ";

    std:: cin >> str;

    std:: cout << str.substr(1, 3) << '\n';

    size_t idx = str.find("a");

    if (idx == std::string::npos) std:: cout <<  "Символа a не найдено\n";

    else std:: cout << idx;

    return 0;
    
}
