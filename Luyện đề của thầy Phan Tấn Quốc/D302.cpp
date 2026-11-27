/*
Câu 2. (2,0 điểm)
Cho dãy n phân số f[0], f[1], ..., f[n-1] trong đó tử số và mẫu số là các số nguyên dương.
Cấu trúc mỗi phân số được định nghĩa:
struct fraction {
    int numerator;
    int denominator;
};
Hãy viết chương trình hoàn chỉnh thực hiện các công việc sau:
a. Nhập n; nhập tử số, mẫu số của mỗi phân số f[i] với i = 0..n-1.
b. Xuất dãy phân số f[i] với i = 0..n-1.
c. Đếm xem dãy n phân số trên có bao nhiêu phân số tối giản?
d. Sắp xếp dãy n phân số trên theo chiều tăng dần.
   Ví dụ: n = 7
   Dữ liệu vào: 3/7 2/5 17/6 6/4 16/21 6/8 17/68
   - Kết quả câu b: 3/7 2/5 17/6 6/4 16/21 6/8 17/68
   - Kết quả câu c: 4
   - Kết quả câu d: 17/68 2/5 3/7 6/8 16/21 6/4 17/6
*/
struct fraction
{
    int numerator;
    int denominator;
};
#include <iostream>
using namespace std;
void nhap(int &n, fraction f[]);
void xuat(int n, fraction f[]);
int demsotoigian(int n, fraction f[]);
void sapxeptang(int &n, fraction f[]);
int main()
{
    int n;
    fraction f[n];
    nhap(n, f);
    xuat(n, f);
    cout << "/nDãy " << n << " gồm" << demsotoigian(n, f) << " số tối giản." << endl;
    sapxeptang(n, f);
    xuat(n, f);

    return 0;
}
void nhap(int &n, fraction f[])
{
    cout << "Nhập n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhập tử ";
        cin >> f[i].numerator;
        cout << "Nhập mẫu ";
        cin >> f[i].denominator;
    }
}
void xuat(int n, fraction f[])
{
    for (int i = 0; i < n; i++)
        cout << f[i].numerator << "/" << f[i].denominator << " ";
    cout << endl;
}
int ngto(int t)
{
    if (t < 2)
        return 0;
    for (int i = 2; i * i < t; i++)
        if (t % i == 0)
            return 1;
    return 0;
}
int sotoigian(fraction t)
{
    if (ngto(t.numerator))
        if (ngto(t.denominator))
            return 1;
    return 0;
}
int demsotoigian(int n, fraction f[])
{
    int dem;
    for (int i = 0; i < n; i++)
        if (sotoigian(f[i]))
            dem++;
    return dem;
}
void swap(fraction &a, fraction &b)
{
    fraction temp;
    a = temp;
    a = b;
    b = temp;
}
void sapxeptang(int &n, fraction p[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if p
                [i].numerator *f[j].denominator > f[i].numerator *f[j].denominator
        }
    }
}