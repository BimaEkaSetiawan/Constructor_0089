#include <iostream>
using namespace std;
class buku{
    string judul;

    public:
    buku setJudul(string judul){
        this->judul = judul;
        return *this;
    }
    string getjudul(){
        return this -> judul;
    }
};

int main(){
    buku bukunya;
    cout << bukunya.setJudul("matematika").getjudul();
    return 0;
}