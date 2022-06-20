#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;

        Mahasiswa(string nama, string NIM, string jurusan){
            Mahasiswa::nama = nama;
            Mahasiswa::NIM = NIM;
            Mahasiswa::jurusan = jurusan;
        }

        string stringify(){
            return nama + " " + NIM + " " + jurusan;
        }
};

class DBase{
    public:
        ofstream menulis;
        ifstream membaca;
        string fileName;

        DBase(const char *fileName){
            DBase::fileName = fileName;
        }

        void save(Mahasiswa data){
            cout << data.nama << endl;
            cout << data.NIM << endl;
            cout << data.jurusan << endl;

            DBase::menulis.open(DBase::fileName, ios::app);
            DBase::menulis << data.stringify() << endl;
            DBase::menulis.close();
        }

        void showAll(){
            DBase::membaca.open(DBase::fileName, ios::in);
            string nama, NIM, jurusan;
            int index = 1;

            while(!DBase::membaca.eof()){
                DBase::membaca >> nama;
                DBase::membaca >> NIM;
                DBase::membaca >> jurusan;
                cout << index++ << ".\t";
                cout << nama << "\t";
                cout << NIM << "\t";
                cout << jurusan << endl;
            }
            DBase::membaca.close();
        }
};


int main(int argc, char const *argv[])
{
    // membuat object-object yang diperlukan
    DBase database = DBase("data.txt");
    database.showAll();

    // input user
    string nama, NIM, jurusan;
    cout << "MASUKKAN DATA MAHASISWA" << endl;
    cout << "Nama: ";
    cin >> nama;
    cout << "NIM: ";
    cin >> NIM;
    cout << "Jurusan: ";
    cin >> jurusan;

    Mahasiswa dataMahasiswa = Mahasiswa(nama, NIM, jurusan);

    // save dat mahasiswa
    database.save(dataMahasiswa);

    // menampilkan seluruh data di database
    database.showAll();

    return 0;
}
