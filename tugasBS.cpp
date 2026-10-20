#include <iostream>
using namespace std;

int binarySearchIterative(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; 
        }
        
        if (arr[mid] < target) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    return -1; 
}

int main() {
    int jumlahData;

    cout << "masukkan jumlah data nilai mahasiswa: ";
    cin >> jumlahData;

    int nilai[jumlahData];

    cout << "masukkan " << jumlahData << " data nilai (terurut ascending): ";
    for (int i = 0; i < jumlahData; i++) {
        cout << "nilai indeks ke-" << i << ": ";
        cin >> nilai[i];
    }

    int cariNilai;
    cout << "\nmasukkan nilai yang ingin dicari: ";
    cin >> cariNilai;

    int hasil = binarySearchIterative(nilai, jumlahData, cariNilai);

    if (hasil != -1) {
        cout << "data ditemukan pada indeks ke-" << hasil << "\n";
    } else {
        cout << "data tidak ditemukan";
    }

    return 0;
}