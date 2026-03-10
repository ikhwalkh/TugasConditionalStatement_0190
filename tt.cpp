//Library
#include <iostream>
using namespace std;

// memasukkan input data nya
void inputData(float &berat, float &tinggi)
{
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;

    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

// Rumus BMI nya
float hitungBMI(float berat, float tinggi)
{
    float bmi;
    bmi = berat / (tinggi * tinggi);
    return bmi;
}

// untuk menentukan kondisi menggunakan if else di gunakan untu mengambil keputusaan secara otomatis
string cekKondisi(float bmi)
{
    if (bmi < 18.5)
        return "Berat Badan Kurang";
    else if (bmi < 25)
        return "Berat Badan Normal";
    else if (bmi < 30)
        return "Berat Badan Kelebihan";
    else
        return "Obesitas";
}

//untuk menjalankan program yang telah dibuat 
int main()
{
    float berat, tinggi, bmi;

    cout << "--- Selamat Datang Mahasiswa Kelas D 2025 ---" << endl;

    inputData(berat, tinggi);

    bmi = hitungBMI(berat, tinggi);
    
    cout << endl;
    cout << "--- hasil ---" << endl;
    cout << "Nilai BMI: " << bmi << endl;
    cout << "Kondisi: " << cekKondisi(bmi) << endl;

    return 0;      //tinggal run code
}