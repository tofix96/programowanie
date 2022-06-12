#include <iostream>

using namespace std;



template <class Typ1, class Typ2>

class Para {
    Typ1 a;
    Typ2 b;
public:
    Para() {};
    void wpisz(Typ1 a1, Typ2 b1) { a = a1, b = b1; }
    void wypisz() { 
       cout << "nasza para to: " << a << " " << b << endl; 
    }
};

template<int,int>
class Para {
    int a;
    int b;
    int z;
public:
    Para() {};
    void wpisz(Typ1 a1, Typ2 b1) { a = a1, b = b1; }
  //  void podaj_z(int _z) { z = _z; }
    void wypisz() { "Nasza trojka elementow to: " << a << " " << b << " " << z << endl; }
};




int main()
{
    int c = 3;
    Para<int, float> p1;
    p1.wpisz(c, 81);
    p1.wypisz();
    Para<int, int> p2;
    p2.wpisz(1, 2);
   // p2.podaj_z(3);
    p2.wypisz();
   
}



//class Koszyk_na_int {
//    int a;
//public:
//    void Wloz(int _a) { a = _a; }
//    void Wypisz() { cout << "W koszyku mamy:" << a << endl; }
//};
//
//class Koszyk_na_float {
//    float b;
//public:
//    void Wloz(float _b) { b = _b; }
//    void Wypisz() { cout << "W koszyku mamy:" << b << endl; }
//};
//
//
//int main(int argc, char* argv[])
//{
//    int a = 3,b=5.55;
//
//    Koszyk_na_int kosz;
//    Koszyk_na_float koszf;
//    kosz.Wloz(a);
//    koszf.Wloz(b);
//    kosz.Wypisz();
//    koszf.Wypisz();
//    
//}
