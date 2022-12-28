#include <iostream>
#include "header.h"

Weapon:: ~Weapon() 
{

    std:: cout << name << " " << damage << " " << weight << '\n';


    std:: cout << "Экземпляр класса удаляется...\n";

}

Weapon:: Weapon() : Weapon("weapon", 0, 0) {}

Weapon:: Weapon(std:: string n, int d, int w)

        : name(n), damage(d), weight(w) {}

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

int main()
 {
    setlocale (LC_ALL,"Russian");

    Weapon first;


    first.set_name("w11");

    first.set_damage(222);

    first.set_weight(333);

    Characteristic ch(25);

    std:: cout << first.get_damage() << " " << first.get_name() << " " << first.get_weight() << '\n';


    std:: cout << ch.GetDamage(&first) << '\n';


    MyMath math;


    math.Add();

    std:: cout << math.counter << '\n';

     math.Mult();

    std:: cout << math.counter << '\n';

     math.Div();

    std:: cout << MyMath::counter << '\n';

     math.Sub();

    std:: cout << math.counter << '\n';


    return 0;
}