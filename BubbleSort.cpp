#include <iostream>
#include <string>
using namespace std;

int arr[20];
int n; // Deklarasi variabel global n untuk menyimpan banyaknya elemen

void input() { // prosedur untuk input
    while (true) {
        cout << "Masukan banyaknya elemen pada array : "; // Output ke layar
        cin >> n; // Input dari pengguna
        if (n <= 20) // Jika n kurang dari atau sama dengan 20
            break; // Keluar dari loop
        else { // Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen \n"; 
        }
    }
    // Lanjutan kode untuk input elemen array biasanya ada di bawah sini...
}
