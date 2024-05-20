#include <iostream>
#include <string>
using namespace std;

class orang {
    public:
    string nama;

    orang(string pNama) :
    nama(pNama) {
        cout << "orang dibuat\n" << endl;
    }
    ~orang() {
        cout << "oramh dihapus\n" << endl;
    }
