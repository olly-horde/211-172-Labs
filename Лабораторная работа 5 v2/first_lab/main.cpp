#include <iostream>
#include "weapon.h"
#include "person.h"
#include "magic_weapon.h"
#include "disposable_weapon.h"
#include "template.h"

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

    
    MagicWeapon mw("MAGICWEAPON", 10, 20, Weap::BOW, 30);

    mw.Attack();

    DisposableWeapon dw;

    dw.Attack();

    dw.Attack();



    WeaponTemplate<DisposableWeapon> wpt(dw, "left");

    WeaponTemplate<MagicWeapon> mwpt(mw, "left");

    std:: cout << "DisposableWeapon damage: " << wpt.getWeapon().get_damage() << ' ' << wpt.getArm() << '\n';

    mwpt.setArm("right");

    std:: cout << "MagicWeapon damage: " << mwpt.getWeapon().get_damage() <<  ' ' << mwpt.getArm() << '\n';


    std:: cout << mw.get_name() << " " << mw.get_additional_damage() << " " << mw.get_damage() << '\n';

     



    WeaponTemplate<int> iwpt(2, "left");

    std:: cout << "NOT A WEAPON: " << iwpt.getWeapon() << '\n';


    return 0;
    
}
