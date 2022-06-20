#include <iostream>
#include <string>

using namespace std;


class Mahasiswa{
    public:
        string nama;
        double IPK;

        Mahasiswa(string nama, double IPK){
            Mahasiswa::nama = nama;
            Mahasiswa::IPK = IPK;
        }

        // method tanpa parameter dan tanpa return
        void tampilkanData(){
            cout << "Nama saya " << nama << ", IPK saya ";
            cout << IPK << endl;
        }

        // method dengan parameter dan tanpa return 
        void ubahNama(const char *namaBaru){
            Mahasiswa:: nama = namaBaru;
        }

        // method tanpa parameter dan dengan return 
        string getNama(){
            return Mahasiswa::nama;
        }
        double getIPK(){
            return IPK;
        }

        // methhod dengan parameter dan dengan return
        double katrolNilai(const char &tambahNilai){
            return Mahasiswa::IPK + tambahNilai;
        }

};

int main(){

    Mahasiswa mahasiswa1 = Mahasiswa("ucup", 2.5);
    Mahasiswa mahasiswa2 = Mahasiswa("otong", 3.5);
    mahasiswa1.tampilkanData();
    mahasiswa2.tampilkanData();

    mahasiswa1.ubahNama("mario");
    mahasiswa1.tampilkanData();

    string getNama = mahasiswa1.getNama();
    cout << "data nama = " << getNama << endl;

    cout << "data IPK = " << mahasiswa1.getIPK() << endl;

    cout << "nilai katrol = " << mahasiswa1.katrolNilai(+1) << endl;

    return 0;
}