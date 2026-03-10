//Library atau repository
#include <iostream>
using namespace std;

//float
float Rata_rata(float a, float b){
    return (a+b)/2;
}
//string
string Status_lulus(float r){
    if (r >= 60)
        return "Lolos";
    else 
        return "Gagal";
}
// int main nya
int main(){
    float nilBI,nilMT,rerata;
    string status;
// cara pemakainnya if else
    cout << endl;
    cout << "Masukkan nilai Bahasa inggris = ";
    cin >> nilBI;
    cout << "Masukkan nilai Matematika = ";
    cin >> nilMT;

    //rerata = (nilBI+nilMT)/2;
    //if (rerata >= 60)
       // status = "Lolos";
    //else
     //   status = "Gagal";
     rerata = Rata_rata(nilBI,nilMT);
    
        cout << "Status kelulusan = "<<Status_lulus(rerata)<<" ,dengan nilai rerata = "<<rerata<<endl; //hasil akhir nya tinggal di run code
}