#include<iostream>
#include<string>

#define GetStringVal(variable) std:: cout << #variable << " = " << variable << '\n'

int main() {                                                                
    setlocale(LC_ALL, "rus");                                              

    int nt1 = 150;

    float nt2 = 15.933;

    short nt3 = 250;

    GetStringVal(nt1);

    GetStringVal(nt2);

    GetStringVal(nt3);

    short day = 17;

    std:: string month = "Октябрь";

    int year = 2003;

    std:: cout << "Моя дата рождения: " << day << " " << month << " " << year << " года\n";

    const float nt4 = 2.3;

    const std:: string nt5 = "WINDOWS";

    std:: cout << nt4 << " " << nt5 << '\n';
    
    return 0;                                                         
}                                                                     
