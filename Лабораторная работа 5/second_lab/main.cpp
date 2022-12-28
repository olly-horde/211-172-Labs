#include <iostream>
#include "header.h"
#include "person.h"
#include "magic_weapon.h"

Weapon:: ~Weapon() {

    std:: cout << name << " " << damage << " " << weight << '\n';

    std:: cout << "Экземпляр класса удаляется...\n";
}
Weapon:: Weapon() : Weapon("weapon", 0, 0, BOW) {}

Weapon:: Weapon(std:: string n, int d, int w, Weap t)

        : name(n), damage(d), weight(w), type(t) {}

int Weapon:: weight_sum(int w) { return weight + w; }

int Weapon:: weight_sum(Weapon *other) { return weight_sum(other->weight); }

bool Weapon:: check_weight(int w) {

    if (w < weight) return false;

    return true;
}

class Characteristic {

public:

    int power;

    Characteristic(int p) : power(p) {}

    int GetDamage(Weapon *weapon) {

        return power + weapon->get_damage();
    }

};


class MyMath {

public: 

    static int counter;

    static void Add() { counter++; }

    static void Sub() { counter++; }

    static void Mult() { counter++;}

    static void Div() { counter++; }


}; int MyMath::counter = 0;


template<typename T1, typename T2>

bool operator > (T1 w1, T2 w2) { return w1.get_damage() > w2.get_damage(); }


template<typename T1, typename T2>

bool operator < (T1 w1, T2 w2) { return w1.get_damage() < w2.get_damage(); }



int main() {

    setlocale (LC_ALL,"Russian");

    Weapon w1("weapon", 10, 0, Weap::ONEHANDED);

    if (w1.get_type() == Weap::ONEHANDED) std:: cout << "Одноручное оружие" << '\n';

    Weapon w2("weapon", 0, 0, Weap::TWOHANDED);

    if (w2.get_type() == Weap::TWOHANDED) std:: cout << "двуручное оружие" << '\n';

    Weapon w3("weapon", 0, 0, Weap::BOW);

    if (w3.get_type() == Weap::BOW) std:: cout << "лук" << '\n';

    Weapon w4("weapon", 0, 0, Weap::CROSSBOW);

    if (w4.get_type() == Weap::CROSSBOW) std:: cout << "арбалет" << '\n';

    
    Person p(1, "noobmaster", "1234567890");

    p.print_data();


    MagicWeapon mw("MAGICWEAPON", 10, 20, Weap::BOW, 30);

    std:: cout << mw.get_name() << " " << mw.get_additional_damage() << " " << mw.get_damage() << '\n';

    
    if (mw > w2) std:: cout << "Урон первого оружия больше урона второго\n";

    if (w2 < mw) std:: cout << "Урон первого оружия меньше урона второго\n";

    if (w1 > w2) std:: cout << "Урон первого оружия больше урона второго\n";

    if (mw < mw) std:: cout << "Урон первого оружия меньше урона второго\n";



    return 0;
}
