#include <iostream>
using namespace std;

class bangunDatar {

    //akses modifier
private:
    float panjang, lebar;
public:
    float luas;

    void input() {
        cout << "Masukan Panjangnya = ";
        cin >> panjang;
        cout << "Masukan Lebarnya = ";
        cin >> lebar; 
    }

    float hitungLuas (){
        return panjang * lebar;
    }
    void display(){}
};

int main() {
    return 0;
}
