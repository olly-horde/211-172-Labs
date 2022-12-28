class Weapon
 {

public:

    std:: string name;

    int damage;

    int weight;



    bool check_weight(int w);

    int weight_sum(Weapon *other);

    int weight_sum(int w);

    Weapon(std:: string n, int d, int w);

    Weapon();

    ~Weapon();

};
