class Weapon {
private:
    std:: string name;
    int damage;
    int weight;
public:
    bool check_weight(int w);
    int weight_sum(Weapon *other);
    int weight_sum(int w);
    int get_damage() {return damage; }
    int get_weight() {return weight; }
    std:: string get_name() { return name; }
    void set_damage(int d) { damage = d; }
    void set_weight(int w) { weight = w; }
    void set_name(std:: string n) { name = n; }

    Weapon(std:: string n, int d, int w);
    Weapon();
    ~Weapon();

    friend class Characteristic;
};
