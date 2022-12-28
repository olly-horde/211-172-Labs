#include <iostream>
#include <vector>
#include <map>

template<typename T>

void print_vector(std:: vector<T>& vec) {

    std:: cout << "{ ";

    bool flag = false;

    for (T& val : vec) {

        if (flag == true) std:: cout << ", ";

        std:: cout << val;

        flag = true;

    }
    std:: cout << " }\n";

}

class Settings {

public:

    inline static std:: map<std:: string, std:: string> hm = {};

    static void Add(std:: string key, std:: string value) {

        hm[key] = value;

    }
    static std:: string Get(std:: string key) {

        return hm[key];

    }

    static void Print() {

        for (auto& Map : hm) {

            std:: cout << Map.first << " " << Map.second << '\n';

        }
    }
};
 
int main()
 {
    setlocale (LC_ALL,"Russian");


    std::vector<float> victor;


    for (int i = 0; i < 5; i++) victor.push_back((float) i + 0.1);


    print_vector(victor);


    victor.insert(victor.begin() + 3, 7.7);


    print_vector(victor);


    victor.pop_back();


    print_vector(victor);



  //  Settings setup;
  //  setup.Add("key", "value");
  //  setup.Add("key2", "value2");
  //  setup.Add("key42", "value3");
  //  setup.Add("key4334", "value23213");
  //  setup.Print();
  //  std:: cout << setup.Get("key42") << '\n';

    Settings::Add("key", "value");

    Settings::Add("key1", "value4");

    Settings::Add("key2", "value3");

    Settings::Add("key3", "value2");

    Settings::Add("key4", "value1");

    Settings::Print();

    std:: cout << Settings::Get("key4") << '\n';

    return 0;
    
}
