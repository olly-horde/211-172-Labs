
class MagicWeapon : public Weapon
 {

private:

    int additional_damage;

public:

    int get_additional_damage() { return additional_damage; }

    int get_damage() { return damage + additional_damage; }

    MagicWeapon() : additional_damage(0), Weapon() {}

    MagicWeapon(std:: string n, int d, int w, Weap t, int ad)

        : additional_damage(ad), Weapon(n, d, w, t) {}

};
