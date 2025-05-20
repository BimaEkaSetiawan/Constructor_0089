#include <iostream>
#include <string>
using namespace std;

class Barang{
    public:
    Barang(string namaBarang, int kodeBarang);
};

Barang::Barang(string namaBarang, int kodeBarang){
    cout << "constructor berparameter" << endl;
    cout << "nama barang = "<< namaBarang << endl;
    cout << "kode barang =" << kodeBarang << endl;
}

int main(){
    Barang ipin("asep", 23333);
    return 0;
}