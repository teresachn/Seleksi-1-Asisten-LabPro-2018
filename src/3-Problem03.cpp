#include <iostream>
using namespace std;

bool is_composite(int n);

int main () {
    // Kamus
    int A, B, min, max;
    // Menerima inputan
    cout << "Masukkan nilai A : ";
    cin >> A;
    cout << "Masukkan nilai B : ";
    cin >> B;
    // Mencari maximum dan minimum
    if (A > B) {
        max = A;
        min = B;
    } else {
        min = A;
        max = B;
    }
    // Menampilkan bilangan komposit
    cout << "Bilangan komposit diantara " << min << " sampai " << max << " adalah :" << endl;
    for (int i = min+1; i < max; i++) {
        if (is_composite(i)) {
            cout << i << endl;
        }
    }
    return 0;
}

// Fungsi bilangan komposit
bool is_composite(int n) {
    if (n <= 1) {
        return false;
    }
    else if (n <= 3) {
        return false;
    } else if ((n % 2 == 0)||(n % 3 == 0)) {
        return true;
    }
    int i = 5;
    while (i*i <= n) {
        if ((n % i == 0)||(n % (i+2) == 0)) {
            return true;
        }
        i += 6;
    }
    return false;
}