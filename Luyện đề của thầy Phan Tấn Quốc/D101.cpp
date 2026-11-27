/*
Câu 1 (2,0 điểm)
a. Viết hàm đếm số chữ số của số nguyên dương n.
Ví dụ: n = 2025 thì kết quả là 4.

b. Cho số nguyên dương n và số thực x. Viết hàm tính S(n, x) = √(x + √(x + ... + √x)) với n dấu căn bậc hai.
Ví dụ: n = 5, x = 2 thì kết quả là 1.99759.
*/
#include <iostream>
using namespace std;
int dem(int t);
double tong(int n, int x);

int main()
{
    int t, n, x;
    t = 2025;
    n = 5;
    x = 2;
    cout << "Kết quả câu a: " << dem(t) << endl;
    cout << "Kết quả câu b: " << tong(n, x) << endl;

    return 0;
}
int dem(int t)
{
    int temp = 0;
    while (t > 0)
    {
        temp++;
        t /= 10;
    }
    return temp;
}
double tong(int n, int x)
{
    if (n == 1)
        return sqrt(x);
    return sqrt(x + tong(n - 1, x));
}