#include <iostream>
using namespace std;

int main () {
    int jumlahMurid, userSukai = 0, userTidak = 0, pilihan;

    cout << "Jumlah Murid: ";
    cin >> jumlahMurid;

    for (int i = 0; i < jumlahMurid; i++) {
        cout << "Murid " << i+1 << " (1-Sukai, 0-Tidak sukai): ";
        cin >> pilihan;

        if (pilihan == 1) userSukai++;
        else userTidak++;
    }

    cout << "\nHasil Voting:\n";
    cout << "Sukai : " << userSukai << "\n";
    cout << "Tidak Sukai : " << userTidak << "\n";

    if (userSukai > userTidak) cout << "Disetujui\n";
    else if (userTidak > userSukai) cout << "Tidak Seteju\n";
    else cout << "Seri\n";

    return 0;
}