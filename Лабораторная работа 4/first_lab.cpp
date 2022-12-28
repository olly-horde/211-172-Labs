#include <iostream>
#include <string>

class Weapon
 {

public:

    std:: string name;

    int damage;

    int weight;
    
    Weapon(std:: string n, int d, int w)

        : name(n), damage(d), weight(w) {}


    Weapon()

        : Weapon("weapon", 0, 0) {}

};

int main() {

    Weapon first;

    std:: cout << first.name << " " << first.damage << " " << first.weight << '\n';

    Weapon second("ak", 23, 32);

    std:: cout << second.name << " " << second.damage << " " << second.weight << '\n';

    return 0;

}