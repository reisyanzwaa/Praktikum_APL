#include <iostream>
#include <string>
#include <limits>
using namespace std;

double celciusToReamur(double celcius);
double celciusToFahrenheit(double celcius);
double celciusToKelvin(double celcius);
double reamurToCelcius(double reamur);
double reamurToFahrenheit(double reamur);
double reamurToKelvin(double reamur);
double fahrenheitToCelcius(double fahrenheit);
double fahrenheitToReamur(double fahrenheit);
double fahrenheitToKelvin(double fahrenheit);
double kelvinToCelcius(double kelvin);
double kelvinToReamur(double kelvin);
double kelvinToFahrenheit(double kelvin);

int main() {
    string nama, nim;
    int salahLogin = 0;

    while (true) {
        cout << "=== Program Konversi Suhu Sederhana ===" << endl;
        cout << "1. Login" << endl;
        cout << "2. Keluar" << endl;
        cout << "Pilih menu: ";
        int menu;
        cin >> menu;

        if (menu == 1) {
            cout << "Masukkan Nama Anda: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan buffer(area memori yang digunakan untuk menyimpan data sementara sebelum diteruskan ke proses berikutnya)
            getline(cin, nama);
            cout << "Masukkan NIM Anda: ";
            cin >> nim;

            if (nama == "Reisya Nazwa Anindya" && nim == "2309106099") {
                cout << "Login anda berhasil!" << endl;
                break;
            } else {
                salahLogin++;
                cout << "Login anda gagal. Kesempatan login anda tersisa: " << 3 - salahLogin << endl;
                if (salahLogin >= 3) {
                    cout << "Anda telah mencapai batas maksimal kesalahan login. Program ini telah berhenti." << endl;
                    return 0;
                }
            }
        } else if (menu == 2) {
            cout << "Program ini berhenti berhenti." << endl;
            return 0;
        } else {
            cout << "Menu tidak valid!. Silakan pilih menu 1 atau 2." << endl;
        }
    }

    while (true) {
        cout << "\nMenu Konversi Suhu:" << endl;
        cout << "1. Celcius ke Reamur" << endl;
        cout << "2. Celcius ke Farenheit" << endl;
        cout << "3. Celcius ke Kelvin" << endl;
        cout << "4. Reamur ke Celcius" << endl;
        cout << "5. Reamur ke Farenheit" << endl;
        cout << "6. Reamur ke Kelvin" << endl;
        cout << "7. Farenheit ke Celcius" << endl;
        cout << "8. Farenheit ke Reamur" << endl;
        cout << "9. Farenheit ke Kelvin" << endl;
        cout << "10. Kelvin ke Celcius" << endl;
        cout << "11. Kelvin ke Reamur" << endl;
        cout << "12. Kelvin ke Farenheit" << endl;
        cout << "13. Keluar" << endl;
        cout << "Pilih menu: ";
        int pilihan;
        cin >> pilihan;

        if (pilihan == 13) {
            cout << "Program ini telah berhenti." << endl;
            break;
        }

        double suhu;
        cout << "Masukkan suhu yang anda inginkan: ";
        while (!(cin >> suhu)) {
            cout << "Inputan ini tidak valid. Masukkan angka." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch (pilihan) {
            case 1:
                cout << "Hasil konversi: " << celciusToReamur(suhu) << " Reamur" << endl;
                break;
            case 2:
                cout << "Hasil konversi: " << celciusToFahrenheit(suhu) << " Fahrenheit" << endl;
                break;
            case 3:
                cout << "Hasil konversi: " << celciusToKelvin(suhu) << " Kelvin" << endl;
                break;
            case 4:
                cout << "Hasil konversi: " << reamurToCelcius(suhu) << " Celcius" << endl;
                break;
            case 5:
                cout << "Hasil konversi: " << reamurToFahrenheit(suhu) << " Fahrenheit" << endl;
                break;
            case 6:
                cout << "Hasil konversi: " << reamurToKelvin(suhu) << " Kelvin" << endl;
                break;
            case 7:
                cout << "Hasil konversi: " << fahrenheitToCelcius(suhu) << " Celcius" << endl;
                break;
            case 8:
                cout << "Hasil konversi: " << fahrenheitToReamur(suhu) << " Reamur" << endl;
                break;
            case 9:
                cout << "Hasil konversi: " << fahrenheitToKelvin(suhu) << " Kelvin" << endl;
                break;
            case 10:
                cout << "Hasil konversi: " << kelvinToCelcius(suhu) << " Celcius" << endl;
                break;
            case 11:
                cout << "Hasil konversi: " << kelvinToReamur(suhu) << " Reamur" << endl;
                break;
            case 12:
                cout << "Hasil konversi: " << kelvinToFahrenheit(suhu) << " Fahrenheit" << endl;
                break;
            default:
                cout << "Menu tidak valid. Silakan pilih menu 1-13." << endl;
        }
    }

    return 0;
}

double celciusToReamur(double celcius) {
    return 4.0 / 5.0 * celcius;
}

double celciusToFahrenheit(double celcius) {
    return (9.0 / 5.0 * celcius) + 32;
}

double celciusToKelvin(double celcius) {
    return celcius + 273.15;
}

double reamurToCelcius(double reamur) {
    return 5.0 / 4.0 * reamur;
}

double reamurToFahrenheit(double reamur) {
    return (9.0 / 4.0 * reamur) + 32;
}

double reamurToKelvin(double reamur) {
    return (5.0 / 4.0 * reamur) + 273.15;
}

double fahrenheitToCelcius(double fahrenheit) {
    return 5.0 / 9.0 * (fahrenheit - 32);
}

double fahrenheitToReamur(double fahrenheit) {
    return 4.0 / 9.0 * (fahrenheit - 32);
}

double fahrenheitToKelvin(double fahrenheit) {
    return 5.0 / 9.0 * (fahrenheit - 32) + 273.15;
}

double kelvinToCelcius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToReamur(double kelvin) {
    return 4.0 / 5.0 * (kelvin - 273.15);
}

double kelvinToFahrenheit(double kelvin) {
    return 9.0 / 5.0 * (kelvin - 273.15) + 32;
}
