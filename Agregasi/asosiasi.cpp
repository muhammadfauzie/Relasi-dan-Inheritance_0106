#include <iostream>
#include <vektor>
using namespace std;

class dokter;
class pasien{
    public:
        string nama;
        vektor<dokter*> daftar_dokter;
        pasien(string pNama): nama(pNama){
            cout << "Pasien \"" << nama <<"\" ada\n"; 
        }

        ~pasien() {
            cout << "Pasien \"" << nama
                << "\" tidak ada\n";
        }
}