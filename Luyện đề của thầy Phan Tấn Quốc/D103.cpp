/*
Câu 3 (2,0 điểm)
Cho hai số phức z = a + bi và w = c + di. Viết chương trình thực hiện:
a. Nhập hai số phức z và w.
b. Tính z + w.
c. Tính z − w.
d. Tính độ lớn |z| = √(a² + b²) và |w|.
Ví dụ: z = 3 + 4i, w = 8 − 6i. Kết quả: z + w = 11 − 2i, z − w = −5 + 10i, |z| = 5, |w| = 10.
*/
#include <iostream>
struct PhanSo
{
    int thuc;
    int ao;
};
using namespace std;
void nhap(PhanSo &ps);
PhanSo tong(PhanSo ps1, PhanSo ps2);
PhanSo hieu(PhanSo ps1, PhanSo ps2);
void xuat(PhanSo ps);
double dolon(PhanSo ps);
int main()
{
    PhanSo z, w;
    nhap(z);
    nhap(w);
    xuat(z);
    xuat(w);
    cout << "Kết quả z + w" << endl;
    xuat(tong(z, w));
    cout << endl;
    cout << "Kết quả z - w" << endl;
    xuat(hieu(z, w));
    cout << endl;
    cout << "Độ lớn của |z| =  " << dolon(z) << endl;
    cout << "Độ lớn của |w| = " << dolon(w) << endl;
    return 0;
}
void nhap(PhanSo &ps)
{
    cout << "Nhập phần thực: ";
    cin >> ps.thuc;
    cout << "Nhập phần ảo: ";
    cin >> ps.ao;
}
PhanSo tong(PhanSo ps1, PhanSo ps2)
{
    PhanSo kq;
    kq.thuc = ps1.thuc + ps2.thuc;
    kq.ao = ps1.ao + ps2.ao;
    return kq;
}
PhanSo hieu(PhanSo ps1, PhanSo ps2)
{
    PhanSo kq;
    kq.thuc = ps1.thuc - ps2.thuc;
    kq.ao = ps1.ao - ps2.ao;
    return kq;
}
void xuat(PhanSo ps)
{
    cout << ps.thuc << " + " << ps.ao << "i" << endl;
}
double dolon(PhanSo ps)
{
    return sqrt(ps.thuc * ps.thuc + ps.ao * ps.ao);
}