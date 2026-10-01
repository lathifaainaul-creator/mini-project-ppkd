/*AINAUL LATHIFA (585995)
  FIANA RAHMAWATI (586900)*/
  
#include <iostream>
using namespace std;

bool status[5] = {false, false, false, false, false};

string nama[5] = {
    "Andi",
    "Budi",
    "Citra",
    "Dina",
    "Eka"
};

string meja[5] = {
    "A1",
    "A2",
    "A3",
    "A4",
    "A5"
};

void menu();
void kehadiran();
void cekstatushariin();
void keluar();

void menu(){
    int i;

    cout << "\n=== SELAMAT DATANG DI SISTEM ABSENSI KANTOR ===" << endl;
    cout << "[1] INPUT KEHADIRAN" << endl;
    cout << "[2] CEK KEHADIRAN" << endl;
    cout << "[3] KELUAR" << endl;
    cout << "Input your option: ";
    cin >> i;

    switch(i){
        case 1:
            kehadiran();
            break;

        case 2:
            cekstatushariin();
            break;

        case 3:
            keluar();
            break;

        default:
            cout << "Pilihan tidak tersedia." << endl;
            menu();
    }
}

void kehadiran(){
    int id;

    cout << "\nMasukkan ID Anda (1-5): ";
    cin >> id;

    if(id >= 1 && id <= 5){
        if(status[id-1] == false){
            status[id-1] = true;

            cout << "\nAbsensi berhasil!" << endl;
            cout << "Nama : " << nama[id-1] << endl;
            cout << "Meja : " << meja[id-1] << endl;
        }
        else{
            cout << "Anda sudah melakukan absensi." << endl;
        }
    }
    else{
        cout << "ID tidak tersedia." << endl;
    }
    (system("pause"));

    menu();
}

void cekstatushariin(){
    cout << "\n=== STATUS KEHADIRAN ===" << endl;

    for(int i = 0; i < 5; i++){
        cout << "ID " << i+1 << " | "
             << nama[i] << " | Meja " << meja[i] << " | ";

        if(status[i] == true){
            cout << "HADIR";
        }
        else{
            cout << "BELUM HADIR";
        }

        cout << endl;
    }
    (system("pause"));

    menu();
}

void keluar(){
    cout << "\nProgram selesai." << endl;
}

int main(){
    menu();
}