#include "../base.h"
using namespace std;

void krs::input(){
  cout<<"Masukkan NIM : ";
  cin>>nim;
  cout<<"Masukkan Nama Mahasiswa : ";
  cin>>nama;
  
  cout<<"Banyak Mata Kuliah yang diambil : ";
  cin>>jml_matkul;
  cout<<"Daftar Mata Kuliah : "<<endl<<endl;
 
  for(int i = 0; i<jml_matkul; i++){
      cout<<"Nama Mata Kuliah "<< i + 1<<" : ";
      cin>>matkul[i];
      cout<<"SKS Mata Kuliah "<< i + 1<<" : ";
      cin>>sks[i];
    }
}

void krs::output(){
  int jml_sks = 7;
  int bayar = 1050000;
  cout<<"============================="<<endl;
  cout<<"NIM : "<<nim<<endl;
  cout<<"Nama Mahasiswa: "<<nama<<endl;
  cout<<"Jumlah Matkul yang diambil : "<<jml_matkul<<endl;

  for(int i =0; i<jml_matkul; i++){
    cout<<"\nMata Kuliah : "<<matkul[i]<<endl;
    cout<<"SKS matkul : "<<sks[i]<<endl;
  }

  cout<<"Total sks : "<<jml_sks<<endl;
  cout<<"Total bayar : "<<bayar<<endl;
  
}

int main(){
  krs X;
  X.input();
  X.output();
}