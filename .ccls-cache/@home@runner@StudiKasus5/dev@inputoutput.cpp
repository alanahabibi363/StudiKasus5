#include "../base.h"
using namespace std;

void krs::input(){
   // cout<<"Daftar matkul : "<<endl;
   // cout<<"1. Alpro "<<endl;
   // cout<<"2. Pweb "<<endl;
   // cout<<"3. pweb ">>endl;
   cout<<"Masukkan nama mahasiswa : ";
   cin>>nama;
   cout<<"Masukkan NIM :";
   cin >> nim;  
   cout<<"Masukkan jumlah sks : ";
   cin>>sks;
   cout<<"Masukkan jumlah mata kuliah : ";
   cin>>jml_matkul;

  if(int i = 1){
    return i;
  }
else{
  cout<<"Masukkan nama matkul : ";
    cin>>matkul ; 
    cout<<"Masukkan jumlah sks : ";
    cin>>sks;
    return jml_matkul;
}
  
  
}

void krs::output(){
  // int total, diskon, bayar;
  // total = 50000;
  // diskon = 5000;
  // bayar = 45000;
  cout<<"NIM :"<<nim<<endl;
  cout<<"Nama Mahasiswa :"<<nama<<endl;
  cout<<"Jumlah Mata Kuliah"<<jml_matkul<<endl;
  cout<<"Jumlah SKS : "<<jml_sks<<endl;
  cout<<"diskon : "<<diskon<<endl;
  cout<<"total bayar : "<<bayar<<endl;
}


int main ()
{
  krs X;
  X.input();
  X.output();

  
}