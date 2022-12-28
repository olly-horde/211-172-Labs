template<typename T>

class WeaponTemplate {

    T weapon;

    std:: string arm;

public:

    T getWeapon() { return weapon; }

    std:: string getArm() { return arm; }

    void setWeapon(T w) { this->weapon = w; }

    void setArm(std:: string a) { this->arm = a; }

    WeaponTemplate(T w, std:: string a) : weapon(w), arm(a) {}
    
};
