
#include <iostream>
using namespace std;

int main() {
    // deklarasi variabel
    int bilangan, n, hasil;
    
    cout<<"Masukan nilai n! = " ; cin>> n ;
    
    hasil = 1;
    for (bilangan=n; bilangan >= 1; bilangan--)
    {
        hasil *= bilangan;
    }
    
    cout<< "Hasil dari n! = " <<hasil<<endl;
   
    cout<< "\ndevelop @mahendrarendi ";
    return 0;
    
}
