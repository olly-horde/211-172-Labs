
enum Weap 
{
    ONEHANDED,

    TWOHANDED,

    BOW,

    CROSSBOW

};



class Weapon {

private:

    std:: string name;

    int weight;

    Weap type;


protected:

    int damage;
    
public:

    bool check_weight(int w);


    int weight_sum(Weapon *other);


    int weight_sum(int w);

    virtual void Attack() = 0;


    virtual int get_damage() {return damage; }


    int get_weight() {return weight; }


    Weap get_type() {return type; }


    std:: string get_name() { return name; }


    void set_damage(int d) { damage = d; }


    void set_weight(int w) { weight = w; }


    void set_name(std:: string n) { name = n; }



    Weapon(std:: string n, int d, int w, Weap t);


    Weapon();


    ~Weapon();



    friend class Characteristic;

    
};

