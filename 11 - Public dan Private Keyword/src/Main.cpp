#include <iostream>
#include <string>
#include "Mahasiswa.hpp"

using namespace std;


int main(int argc, char const *argv[])
{
    Mahasiswa *mahasiswa1 = new Mahasiswa("ucup");
    // kita akan coba akses data public dan private
    cout << mahasiswa1->namePublic << endl; // karena public dapat diakses
    // cout << mahasiswa1->namePrivate << endl; // karena private tidak dapat diakses

    Mahasiswa *mahasiswa2 = new Mahasiswa("otong");
    mahasiswa2->showDisplayPublic(); // dapat dilakukan karena method public
    // mahasiswa2->showDisplayPrivate(); // tidak bisa dilakukan karena private
    
    Mahasiswa *mahasiswa3 = new Mahasiswa("JOHN");
    mahasiswa3->showDisplayPublic();

    return 0;
}
