// 24104410003_M NAUVAL FITRA S_Tugas 3.cpp
//
#include <iostream>
using namespace std;

int main()
{
    cout << "NAMA: Muhammad Nauval Fitra Shandika\nNIM: 24104410003\n\n";
    cout << "Berikut ini adalah bilangan prima dari 1-50\n";
    for (int i = 1; i <= 50; i++) {
        int mod = 0;
        for (int j = i; j > 0; j--) {
            int y = i % j;
            if (y == 0) {
                mod++;
            }
        }
        if (mod == 2) {
            cout << i << " ";
        }
    }
    cout << "\n\nSekian dari saya\nTerima Kasih";
}