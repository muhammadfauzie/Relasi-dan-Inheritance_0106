#include <iostream>
#include <vektor>
using namespace std;

#include "ibu.h"
#include "ibu.h"

int main() {
    ibu* varIbu = new ibu("dini");
    ibu* varIbu2 = new ibu("novi");
    anak* varAnak1 = new anak("tono");
    anak* varAnak2 = new anak("rini");
    anak* varAnak3 = new anak("dewi");

    varIbu->tambahanAnak(varAnak1);
    varIbu->tambahanAnak(varAnak2);
    varIbu->tambahAnak(varAnak3);
    varIbu->tambahAnak(varAnak1);

    varIbu->cetakAnak();
    varIbu2->cetakAnak();

    delete varIbu;
    delete varIbu2;
    delete varAnak1;
    delete varAnak2;
    delete varAnak3;
    
}