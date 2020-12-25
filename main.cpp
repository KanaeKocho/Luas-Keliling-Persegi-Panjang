#include <iostream>
using namespace std;
double luas(double panjang, double lebar)
{
    double l = panjang * lebar;
    return l;
}
double keliling(double p, double l)
{
    double k = 2 * (p + l);
    return k;
}
void print_luas(double a, double b)
{
    cout << "Luasnya Adalah :" << endl;
    cout << luas(a, b) << endl;
}

void print_keliling(double a, double b)
{
    cout << "Kelilingnya Adalah :" << endl;
    cout << keliling(a, b) << endl;
}
int main()
{
    double p, l;
    cout << "Masukkan Panjang :" << endl;
    cin >> p;
    cout << "Masukkan Lebar :" << endl;
    cin >> l;
    print_luas(p, l);
    print_keliling(p, l);
}
