#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    public:
         mahasiswa(int nim, string nama);
};

mahasiswa::mahasiswa(int nim, string nama){
    cout << "constructor berparameter terpanggil" << endl;
    cout << "nim :" << nim << endl;
    cout << "nama :" << nama << endl;
}

int main(){
    mahasiswa mhs(123456, "pascal");
    return 0;
}