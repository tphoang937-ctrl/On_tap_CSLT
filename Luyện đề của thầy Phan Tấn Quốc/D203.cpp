/*
Cho dãy n hình chữ nhật R0, R1, ..., R(n−1). Mỗi hình chữ nhật có chiều dài và chiều rộng là các số nguyên dương.
Cấu trúc được định nghĩa như sau:
struct rectangle { int length; int width; };
Viết chương trình thực hiện:
a. Nhập n, sau đó nhập chiều dài và chiều rộng của mỗi hình chữ nhật.
b. Tính tổng diện tích của n hình chữ nhật.
Ví dụ: n = 7, với các hình (8, 9), (6, 4), (12, 5), (18, 12), (10, 5), (3, 2), (11, 4). Kết quả câu b là 472.
*/
#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int width;
};

const int MAXN = 100;

void nhap(rectangle &hcn);
double dientich(rectangle hcn);

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    rectangle a[MAXN];

    for (int i = 0; i < n; i++)
        nhap(a[i]);
    int tongdt = 0;
    for (int i = 0; i < n; i++)
        tongdt += dientich(a[i]);
    cout << "Tính tổng diện tích của " << n << " hình chữ nhật = " << tongdt << endl;

    return 0;
}

void nhap(rectangle &hcn)
{
    cin >> hcn.length >> hcn.width;
}

double dientich(rectangle hcn)
{
    return hcn.length * hcn.width;
}