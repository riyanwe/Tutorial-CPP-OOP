// friend zone 
// friend sebuah keyword, yang nantinya akan membuat function bisa mengakses
// member public atau non-public contoh private

#include <iostream>
#include <string>

using namespace std;

class IntelHero;
class StrengthHero{
    private:
        string name;
        double power;

    public:
        StrengthHero(const char *name){
            this->name = name;
            this->power = 100;
        }

        // ini adalah global scope
        friend bool compare(const StrengthHero &hero1, const IntelHero &hero2); 
        friend bool compare(const IntelHero &hero1, const StrengthHero &hero2);
};

class IntelHero{
    private:
        string name;
        double power;

    public:
        IntelHero(const char *name){
            this->name = name;
            this->power = 50;
        }
        
        // ini adalah global scope
        friend bool compare(const StrengthHero &hero1, const IntelHero &hero2);
        friend bool compare(const IntelHero &hero1, const StrengthHero &hero2);
};


// ini bisa di deklarasikan di luar maupun di dalam class
bool compare(const StrengthHero &hero1, const IntelHero &hero2){
    cout << "ini adalah fungsi compare" << endl;
    return hero1.power > hero2.power;
}

// ini bisa di deklarasikan di luar maupun di dalam class
bool compare(const IntelHero &hero1, const StrengthHero &hero2){
    cout << "ini adalah fungsi compare" << endl;
    return hero1.power > hero2.power;
}


int main(int argc, char const *argv[])
{
    StrengthHero hero1 = StrengthHero("ucup");
    IntelHero hero2 = IntelHero("otong");

    cout << compare(hero1, hero2) << endl;
    cout << compare(hero2, hero1) << endl;
    
    return 0;
}
