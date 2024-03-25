#include <iostream>
using namespace std;

int abid[37];
int i, n, j;

void input() {
    while(true) {
        cout << "Masukan Banyaknya elemen araay= ";
        cin >> n;
        if (n <= 37)
            break;
        else {
            cout << "Array dapat dimasukan maksimal 37 elemen";
        }
    }
    cout << endl;
    cout << "==================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "==================" << endl;

    for(int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ":" << endl;
        cin >> abid[i];
    }
}

void selection() {
    int min_index = j;

    do {
        for(int j = 0; j <= n - 2; j++) {
            if(abid[i] < abid[min_index]) {
                int i = abid[min_index];
                abid[j] = abid[min_index];
                abid[min_index] = abid[i];
            }
        }
        min_index = min_index + 1;
    } while (min_index = n -1);
}

void display() {
    cout << endl;
    cout << "=================" << endl;
    cout << "Elemen Array Yang Telah Tersusun" << endl;
    cout << "=================" << endl;
    for (int j = 0; j < n; j++) {
        cout << abid[j] << endl;
    }
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;

}

int main() {
    input();
    selection();
    display();
    system("pause");

    return 0;
}



// 1. Algoritma Bubble Sort mencari elemen terkecil dari list data, kemudian meletakan di sebelah paling ujung, setelah buble sort menukar data bubble sort akan membandingkan dengan bilangan di sebelahnya, apabila bilangan di sebelahnya lebih kecil maka akan di tukar posisinya, bubble sort menjalankan sebanyak n - 1
// 2.Shell Sort bekerja dengan memisahkan data sebanyak n - list, jika data di sebelahnya lebih kecil maka akan di simpan di variabel baru sebagai penyimpanan semantara, kemudian shell sort akan membandingkan lagi dengan data di sebalahnya, jika data di sebelahnya tidak sesuai posisinya maka akan di tukar dengan yang di variable baru, dan data yang ada di variabel baru akan di pindahkan ke posisi yang sesuai
// 3. jika ada beberapa data yang berurutan menggunakan algoritma insertion sort karena di algoritma tersebut memisahkan data array sebelah paling kiri atau sorten list, kemudian dibandingkan dengan data unsorted list, jika unsorted list lebih kecil maka akan di letakan disebelah kiri, jika data lebih besar maka akan di letakan di sebelah kiri, di bandingkan sebanyak n - 1.  