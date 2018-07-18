#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

class persegi_panjang {
  private:
      int panjang,lebar;
  public:
  
  int luas(){
   int luas = panjang*lebar;
   return luas;
   }
 
  int keliling(){
   int keliling = (2*panjang)+(2*lebar);
   return keliling;
  }

       void beri_nilai (int pas_panjang, int pas_lebar){
   panjang=pas_panjang; lebar=pas_lebar;
   }
   
       void beri_nilai_lagi() {
   panjang=7; lebar=10;
   }
  
};

main() {
   persegi_panjang a,b,c;
 int nilai1,nilai2;
 system("color f0");
 cout<<"\t\tMenghitung Luas Dan Panjang Persegi\n";
 cout<<"Panjang = ";
 cin>>nilai1;
 cout<<"Lebar   = ";
 
 cin>>nilai2;
 a.beri_nilai(nilai1,nilai2);
 b.beri_nilai(10,15);
 c.beri_nilai_lagi();
 
 cout<<"\nLuas a = "<<a.luas();
 cout<<"\nLuas b = "<<b.luas();
 cout<<"\nLuas c = "<<c.luas();
 
 cout<<"\n\nKeliling a = "<<a.keliling();
 cout<<"\nKeliling b = "<<b.keliling();
 cout<<"\nKeliling c = "<<c.keliling();
 getch();
}
