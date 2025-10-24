#include <iostream>
using namespace std;

const float PHI = 3.1416;

double my_sqrt (double);
double radius (double, double, double, double);
double circumference (double);
double area (double);

int main(){
    double x1, x2, y1, y2;
    cout << "Masukkan titik tengah lingkaran (x,y) : ";
    cin >> x1 >> y1;
    cout << "\nMasukkan salah satu titik yang ada di garis lingkaran (x, y) : ";
    cin >> x2 >> y2;
    double rad = radius (x1, y1, x2, y2);
    cout << "\nRadius : " << rad
         << "\nDiameter : " << rad*2 
         << "\ncircumference : " << circumference (rad)
         << "\nArea : " << area (rad); 
}

double my_sqrt (double n){
    if (n < 0) {
        return -1;
    }
    double x = n;
    double y = 1;
    double e = 0.000001;
    while (x - y > e){
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
} 

double radius (double a, double b, double c, double d){
    double z = ((a - c)*(a - c)) + ((b - d)*(b - d));
    return my_sqrt(z);
}

double circumference (double g) {
    double z = PHI*g*2;
    return z;
}

double area (double h){
    double z = PHI*h*h;
    return z;
}
