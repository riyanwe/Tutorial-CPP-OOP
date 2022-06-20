#ifndef __MAHASISWA
#define __MAHASISWA

#include <string>
#include <iostream>

class Mahasiswa{
    // Attribute
    public: // dapat di akses oleh siapapun
        std::string namePublic;

    private: // hanya dapat diakses oleh class itu sendiri
        std::string namePrivate;

    // constructor dan methods
    public:
        // constructor selalu public
        Mahasiswa(const char *name);
        void showDisplayPublic();

    private:
        void showDisplayPrivate();

};
#endif