#include <iostream>
#include <numbers>
using namespace std;

int main () {
    cout << "Kalkulator BMI, BMR dan TDEE" << endl;
    cout << "Masukkan berat badan anda (kg): ";
    int weight; cin >> weight;
    cout << "Masukkan tinggi badan anda (m): ";
    float height; cin >> height;

    bool isMale;
    char sexInput;

    while (true) {
        cout << "Masukkan jenis kelamin anda [m/f]: ";
        cin >> sexInput;

        if (sexInput == 'm' || sexInput == 'M') {
            isMale = true; break;
        } else if (sexInput == 'f' || sexInput == 'F') {
            isMale = false; break;
        } else {
            cout << "Jenis kelamin tidak valid. Masukkan M untuk laki-laki dan F untuk perempuan" << endl;
        }
    }

    float bmi;
    bmi = weight/(height*height);
    cout << "BMI anda adalah "; cout << bmi;
    return 0;
}