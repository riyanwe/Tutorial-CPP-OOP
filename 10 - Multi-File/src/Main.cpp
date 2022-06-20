#include <iostream>
#include <string>

// external definition
#include "Player.h"

using namespace std;


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

