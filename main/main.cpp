#include <iostream>
#include <cmath>
using namespace std;

class PhuongTrinhBac2 {
private:
    float a, b, c;

public:
    PhuongTrinhBac2(float a, float b, float c) : a(a), b(b), c(c) {}

    void tinhtoan() {
        float delta = b * b - 4 * a * c;

        if (a == 0) {
            cout << "Day khong phai phuong trinh bac 2." << endl;
        }
        else if (delta < 0) {
            cout << "Phuong trinh vo nghiem." << endl;
        }
        else if (delta == 0) {
            cout << "Phuong trinh co nghiem kep: x = " << -b / (2 * a) << endl;
        }
        else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Phuong trinh co 2 nghiem phan biet:" << endl;
            cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
        }
    }
};

int main() {
    float a, b, c;

    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;
    cout << "Nhap he so c: ";
    cin >> c;

    PhuongTrinhBac2 pt(a, b, c);
    pt.tinhtoan();

    return 0;
}
