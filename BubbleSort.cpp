#include <iostream>
#include <string>
using namespace std;

int arr[20]; // deklarasi variable global array a dengan ukuran 20
int n; // deklarasi variable global n untuk menyimpan banyaknya elemen array

void input() { // procedur untuk input
    while (true) { 
        cout << "Masukkan banyaknya elemen array: "; // output ke layar
        cin >> n; // output dari pengguna
        if (n <= 20) { // jika n kurang dari atau sama dengan 20
            break; // keluar dari loop 
        } else { // jika n lebih dari 20
            cout << "Array dapat mempunyai maksimal 20 elemen." << endl; // pesan error jika input tidak valid
        }
    }
    cout << "===============================" << endl; // output ke layar
        cout << "Masukkan elemen ke-" << endl; // output ke layar
        cout << "===============================" << endl; // output ke layar
        
        for (int i = 0; i < n; i++) { // loop dengan i dimulai dari 0 hingga n-1
            cout << "Element ke-" << (i + 1) << ": "; // output ke layar
            cin >> arr[i]; // output dari pengguna
        }
    }

void bubblesortArray() { //procedur untuk mengurutkan array dengan metode bubble sort
    int pass = 1; // step 1

    do {
        for (int j =0; j < n - 1 - pass; j++) { //step 2
            if (arr[j] > arr[j+1]){ //step 3
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
         pass = pass + 1; // step 4
    
        cout << "Pass " << pass - 1 << ": "; // number of pass
        for (int k = 0; k < n; k++) { 
            cout << arr[k] << " "; // menampilkan data pada number of pass

         }
         cout << endl;

    } while (pass < n - 1); // step 5
}

void display() { 
    cout << endl;
    cout << "===============================" << endl; 
    cout << "Element array yang sudah tersusun: " << endl; 
    cout << "===============================" << endl;
    cout << endl; 
    for (int j = 0; j < n; j++) { 
        cout << arr[j]; // menampilkan arry
        if (j < n - 1) { 
            cout << " --> "; 
        }
    }
    cout << endl;
    cout << endl;
    cout << "jumlah pass = " << n - 1 << endl; // menampilkan jumlah dari pass
    cout << endl;
    cout << endl;
}
