#include <iostream>
#include <string>

using namespace std;

class Hero{
    private:
        string name;

    public:
        Hero(const char *name){
            this->name = name;
        }

        void display() const{
            cout << "Name: " << this->name << endl;
        }

        void setName(const char *name){
            this->name = name;
        }
};

int main(int argc, char const *argv[])
{
    Hero hero1 = Hero("otong");
    hero1.display();
    hero1.setName("mario"); // ini bisa di rubah karna object tidak const
    hero1.display();

    const Hero hero2 = Hero("Saitama");
    hero2.display();
    // hero2.setName("King"); // ini tidak bisa di rubah karna object const
    hero2.display();


    return 0;
}
