#include <iostream>
#include <string> // mendeklarasikan pustaka yang mengontrol pembacaan dan penulisan ke stream standar


class Person {
private:
    std::string nama; // mendeklarasikan kelas Person dengan akses private untuk variabel anggota nama.
    
public:
    
    Person() {
        std::cout << "Saya telah lahir di dunia." << std::endl;
    } // mendefinisikan constructor default Person, yang mencetak pesan "Saya telah lahir di dunia." saat objek Person dibuat tanpa argumen.
    
    Person (const std::string& nama) {
        std::cout << "Manusia bernama " << nama << " telah lahir." << std::endl;
        this->nama = nama;
    } // Mendefinisikan parameterized constructor Person yang menerima satu argumen string nama, mencetak pesan "Manusia bernama [nama] telah lahir.", dan menginisialisasi variabel anggota nama dengan nilai argumen.
    
        void introduce(){
            std::cout << "Halo nama saya " << this->nama << std::endl;
        } // Mendefinisikan fungsi introduce tanpa argumen yang mencetak "Halo nama saya [nama]" menggunakan nilai variabel anggota nama.
    
        std::string getnama() {
            return this->nama;
        } // Mendefinisikan fungsi getter getnama yang mengembalikan nilai variabel anggota nama.
        
        void introduce(Person obj){
            std::string Jenson = obj.getnama();
            std::cout << "Halo " << Jenson << " nama saya : " << this -> nama << std::endl;
        } // Mendefinisikan fungsi introduce yang di-overload, menerima objek Person sebagai argumen. Fungsi ini memanggil metode getnama dari objek argumen untuk mendapatkan namanya, kemudian mencetak pesan "Halo [nama objek argumen] nama saya : [nama objek ini]".
    
}; // Tutup deklarasi kelas

int main() {
    Person Alex; // Membuat objek Person bernama Alex yang memanggil constructor default
    Person Alex1 ("Gilbert"); // Membuat objek Person bernama Alex1 dengan argumen "Gilbert"
    Alex1.introduce(); // Memanggil metode introduce pada objek Alex1
    Person Alex3("Jenson"); // Membuat objek Person bernama Alex3 dengan argumen "Jenson"
    Alex1.introduce(Alex3); // Memanggil metode introduce yang di-overload pada objek Alex1 dengan objek Alex3 sebagai argumen
    
    return 0;
} // Mengakhiri fungsi main dan mengembalikan nilai 0