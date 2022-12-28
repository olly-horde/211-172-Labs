#include <iostream>
#include <string>
#include <vector>
#include <regex>

void addString(std:: vector<std:: string>& vec, std:: string st) {

    std:: string add;

    for (char val : st) {

        if (val != ' ') add += val;

        else {

            if (add.size()) vec.push_back(add);

            add = "";

        }
    }

    if (add.size()) vec.push_back(add);

}

int main() {

    setlocale (LC_ALL,"Russian");

    std:: string str;

    std::cmatch result;

    std:: cout << "Введите ваше имя: ";

    std:: cin >> str;

    std::regex reg(u8"(^[A-Z])([a-z]){2,32}", std::regex::collate);


    if (std::regex_match(str.c_str(), result, reg)) {

        std:: cout << str << " <- Имя введено корректно\n";

    } else {
        std:: cout << str << " <- Имя введено некорректно\n";

    }
    std:: string mails = "1@mail.ru abacaba kek@yandex.ru @@@@";

    std:: vector<std:: string> vecmail;

    addString(vecmail, mails);

    std::cmatch resultm;

    std:: regex regmail("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

    for (std:: string& val : vecmail) {


        if (std::regex_match(val.c_str(), resultm, regmail)) {

            std:: cout << val << " - Валидный email\n";

        } else {
            
            std:: cout << val << " - Невалидный email\n";

        }
    }

    
    return 0;
}
