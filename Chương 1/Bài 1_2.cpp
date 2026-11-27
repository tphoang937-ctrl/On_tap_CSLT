/*
1.2. Trong mặt phẳng tọa độ OXY cho ba điểm A, B, C lần lượt có tọa độ là (x_A, y_A), (x_B, y_B), (x_C, y_C).
Hãy tìm tọa độ trọng tâm, diện tích đường tròn nội tiếp, diện tích đường tròn ngoại tiếp của tam giác ABC.
Note: S = p.r; trong đó p là nửa chu vi, S là diện tích tam giác ABC; R = (a x b x c) : 4S; => r, R; => ...
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double xa, ya, xb, yb, xc, yc;
    cout << "Nhap toa do A (xA yA): ";
    cin >> xa >> ya;
    cout << "Nhap toa do B (xB yB): ";
    cin >> xb >> yb;
    cout << "Nhap toa do C (xC yC): ";
    cin >> xc >> yc;

    // 1. Tọa độ trọng tâm G
    double xg = (xa + xb + xc) / 3.0;
    double yg = (ya + yb + yc) / 3.0;
    cout << "Trong tam G = (" << xg << ", " << yg << ")" << endl;

    // 2. Độ dài 3 cạnh a = BC, b = CA, c = AB
    double a = sqrt(pow(xc - xb, 2) + pow(yc - yb, 2));
    double b = sqrt(pow(xa - xc, 2) + pow(ya - yc, 2));
    double c = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));

    // Nửa chu vi p và diện tích S theo công thức Heron
    double p = (a + b + c) / 2.0;
    double underSqrt = p * (p - a) * (p - b) * (p - c);
    if (underSqrt <= 1e-9)
    {
        cout << "Ba diem A, B, C thang hang hoac trung nhau, khong tao thanh tam giac!" << endl;
        return 0;
    }
    double S = sqrt(underSqrt);

    // 3. Diện tích đường tròn nội tiếp & ngoại tiếp
    const double PI = acos(-1.0); // Hằng số Pi (~3.14159...)

    // Đường tròn nội tiếp: từ S = p * r => bán kính r = S / p, sau đó S_noi = PI * r^2
    double r = S / p;
    double sNoiTiep = PI * r * r;

    // Đường tròn ngoại tiếp: từ R = (a * b * c) / (4 * S), sau đó S_ngoai = PI * R^2
    double R = (a * b * c) / (4.0 * S);
    double sNgoaiTiep = PI * R * R;

    cout << "Dien tich duong tron noi tiep: " << sNoiTiep << endl;
    cout << "Dien tich duong tron ngoai tiep: " << sNgoaiTiep << endl;

    return 0;
}
