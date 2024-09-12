#include <iostream>
#include <numbers>
#include <string>

using namespace std;

int main () {
    cout << "Kalkulator BMI, BMR dan TDEE" << endl;
    cout << "Masukkan berat badan anda (kg): ";
    int weight; cin >> weight;
    cout << "Masukkan tinggi badan anda (cm): ";
    float height; cin >> height; float heightcm = height/100;

    float bmi; //hitung BMI
    bmi = weight/(heightcm*heightcm);

    string bmiCat; //string kategori BMI berdasarkan indikator
    bmiCat =    (bmi < 18.5) ? "Underweight" :
                (bmi < 24.9) ? "Normal" :
                (bmi < 29.9) ? "Overweight" : "Obese";

    cout << endl << "BMI anda adalah " << bmi << " (" << bmiCat << ")" << endl << endl;

    bool isMale; char sexInd; //input jenis kelamin
    while (true) {
            cout << "Masukkan jenis kelamin anda [m/f]: ";
            cin >> sexInd;

            if (sexInd == 'm' || sexInd == 'M') {
                isMale = true; break; // break loop jika valid laki-laki
            } else if (sexInd == 'f' || sexInd == 'F') {
                isMale = false; break; // break loop jika valid perempuan
            } else {
                cout << "Jenis kelamin tidak valid. Masukkan M untuk laki-laki dan F untuk perempuan" << endl;
            } //kembali ke input jenis kelamin
        }
    
    int age;
    cout << "Masukkan usia anda: "; cin >> age; //input usia
    float bmr;
    if (isMale) { //hitung BMR berdasarkan jenis kelamin
        bmr = 88.362 + (13.397*weight) + (4.799*heightcm) - (5.677*age);
    } else {
        bmr = 447.593 + (9.247*weight) + (3.098*heightcm) - (4.330*age);
    }
    cout << endl << "BMR anda adalah " << bmr << " kcal/hari." << endl << endl;

    float tdee;
    int activityLevel; //determinator tingkat aktivitas 1-5
    cout << "Masukkan tingkat aktivitas anda." << endl;
    cout << "1 untuk sedentary (tidak olahraga/olahraga sedikit)" << endl <<
    "2 untuk lightly active (olahraga 1-2 kali seminggu)" << endl << "3 untuk moderately active (olahraga 3-5 kali seminggu)" << endl
    << "4 untuk heavily active (olahraga 6-7 kali seminggu)" << endl << "5 untuk atlet (olahraga 2 kali sehari)" << endl;

    cin >> activityLevel;

    tdee =  (activityLevel == 1) ? (bmr*1.2) :
            (activityLevel == 2) ? (bmr*1.3) :
            (activityLevel == 3) ? (bmr*1.5) :
            (activityLevel == 4) ? (bmr*1.7) : (bmr*2); //hitung tdee berdasarkan tingkat aktivitas
    
    cout << endl << "TDEE anda adalah " << tdee << " kcal/hari." << endl;

    cout << "Press any key to exit...";
    cin.ignore();  // Clear any leftover input
    cin.get();  // Wait for the user to press a key

    return 0;
}