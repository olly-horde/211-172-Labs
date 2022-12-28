#include <iostream>

class Weapon 
{


public:

    std:: string name;

    int damage;

    int weight;

    bool check_weight(int w) {

        if (w < weight) return false;

        return true;

    }


    int weight_sum(Weapon *other) {

        return weight_sum(other->weight);

    }

    int weight_sum(int w) {
        return weight + w;
    }

    Weapon(std:: string n, int d, int w)
        : name(n), damage(d), weight(w) {}

    Weapon()
        : Weapon("weapon", 0, 0) {}

    ~Weapon()
     {

        std:: cout << name << " " << damage << " " << weight << '\n';


    
        std:: cout << "Экземпляр класса удаляется...\n";

    }
};

int main() 
{

    setlocale (LC_ALL,"Russian");

    Weapon first;

    std:: cout << first.name << " " << first.damage << " " << first.weight << '\n';

    Weapon second("ak", 23, 32);

    std:: cout << second.name << " " << second.damage << " " << second.weight << '\n';



    Weapon* dynamic_weapon = new Weapon("dynamic weapon", 222, 100);

    std:: cout << dynamic_weapon->name << " " << dynamic_weapon->damage << " " << dynamic_weapon->weight << '\n';

    std:: cout << dynamic_weapon->check_weight(2) << '\n'; 

    std:: cout << dynamic_weapon->check_weight(2000) << '\n'; 

    std:: cout << dynamic_weapon->weight_sum(&second) << '\n';

    std:: cout << dynamic_weapon->weight_sum(second.weight) << '\n'; 



    delete dynamic_weapon;

    return 0;

}