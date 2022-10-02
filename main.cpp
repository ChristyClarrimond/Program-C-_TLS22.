//Christy Clarrimond Kewas
//Teknik Elektro 2022 / Faraday
//22/498111/TK/54624
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int pil,bilangan_1,bilangan_2;
    float hasil;
    cout<<"Memilih Operasi yang diinginkan :\n";
    cout<<"[1] Penjumlahan\n";
    cout<<"[2] Pengurangan\n";
    cout<<"[3] Perkalian\n";
    cout<<"[4] Pembagian\n";
    cout<<"[5] Sisa bagi\n";
    cout<<"[6] Perpangkatan\n";
    cout<<"[7] Akar Pangkat 2\n";
    cout<<"[8] Akar Pangkat 3\n";
    cout<<"Masukkan Pilihan Operasi Anda : ";
    cin>>pil;

    switch (pil){
    case 1:
        cout<<"Masukkan Bilangan Pertama = ";cin>>bilangan_1;
        cout<<"Masukkan Bilangan Kedua = ";cin>>bilangan_2;
        hasil=bilangan_1+bilangan_2;
        cout<<"Hasil penjumlahan = "<<hasil<<endl<<endl;
        break;
    case 2:
        cout<<"Masukkan Bilangan Pertama = ";cin>>bilangan_1;
        cout<<"Masukkan Bilangan Kedua = ";cin>>bilangan_2;
        hasil=bilangan_1-bilangan_2;
        cout<<"Hasil pengurangan = "<<hasil<<endl<<endl;
        break;
    case 3:
        cout<<"Masukkan Bilangan Pertama = ";cin>>bilangan_1;
        cout<<"Masukkan Bilangan Kedua = ";cin>>bilangan_2;
        hasil=bilangan_1*bilangan_2;
        cout<<"Hasil perkalian = "<<hasil<<endl<<endl;
        break;
    case 4:
        cout<<"Masukkan Bilangan Pertama = ";cin>>bilangan_1;
        cout<<"Masukkan Bilangan Kedua =";cin>>bilangan_2;
        hasil=bilangan_1/bilangan_2;
        cout<<"Hasil pembagianya = "<<hasil<<endl<<endl;
        break;
    case 5:
        cout<<"Masukkan Bilangan Pertama = ";cin>>bilangan_1;
        cout<<"Masukkan Bilangan Kedua = ";cin>>bilangan_2;
        hasil= bilangan_1 % bilangan_2;
        cout<<"Hasil Sisa Bagi = "<<hasil<<endl<<endl;
        break;
    case 6:
        cout<<"Masukkan Bilangan Pertama = ";cin>>bilangan_1;
        cout<<"Masukkan Bilangan Kedua =";cin>>bilangan_2;
        hasil= pow(bilangan_1,bilangan_2);
        cout<<"Hasil Pangkatnya = "<<hasil<<endl<<endl;
        break;
    case 7:
        cout<<"Masukkan Bilangan Pertama = ";cin>>bilangan_1;
        hasil=sqrt(bilangan_1);
        cout<<"Hasil Akar Pangkat Duanya = "<<hasil<<endl<<endl;
        break;
    case 8:
        cout<<"Masukkan Bilangan Pertama = ";cin>>bilangan_1;
        hasil=cbrt(bilangan_1);
        cout<<"Hasil Akar Pangkat Tiganya = "<<hasil<<endl<<endl;
        break;
    default :
        cout<<"Error";
    }
    
return 0;
}