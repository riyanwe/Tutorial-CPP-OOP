#include <iostream>
#include <string>

using namespace std;

// Deklarasi class
class Player{
    public:
        string name;

        // Constructor
        Player(const char *); // dalam bentuk prototype
        void display();
        string getName();
        void setName(const char *);
};

int main(int argc, char const *argv[])
{
    Player *playerObject = new Player("ucup");
    playerObject->display();

    cout << "get name: " << playerObject->getName() << endl;

    cout << "rubah nama" << endl;
    playerObject->setName("otong");
    playerObject->display();
    
    return 0;
}

// Penjabaran method
Player::Player(const char *name){
    this->name = name;
}

void Player::display(){
    cout << "nama player: " << this->name <<endl;
}

string Player::getName(){
    return this->name;
}

void Player::setName(const char *name){
    this->name = name;
}
