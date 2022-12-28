
class DisposableWeapon : public Weapon {

private:

    int additional_damage;

    bool used;

public:

    void Attack() {

        if (used == false) {

           std:: cout << "Атакуем одноразовым оружием\n";

           used = true;

        } else std:: cout << "Оружие уже было использовано\n";

    }

    int get_additional_damage() { return additional_damage; }

    int get_damage() { return damage + additional_damage; }

    DisposableWeapon() : additional_damage(0), used(false), Weapon() {}

    DisposableWeapon(std:: string n, int d, int w, Weap t, int ad)

        : additional_damage(ad), used(false), Weapon(n, d, w, t) {}
        
};
