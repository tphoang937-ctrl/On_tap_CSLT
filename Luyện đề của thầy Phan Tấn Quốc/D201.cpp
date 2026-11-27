/*
Câu 1 (2,0 điểm)
a. Viết hàm tính tổng các chữ số của số nguyên dương n.
Ví dụ: n = 2025 thì hàm trả về 9.

b. Viết hàm kiểm tra số nguyên dương n có phải là số nguyên tố không. Nếu là số nguyên tố thì hàm trả về 1, ngược lại trả về 0.
*/
#include <iostream>
using namespace std;
int tong(int t);
int ngto(int t);
int main()
{
    int t;
    cin >> t;
    cout << "Tổng các chữ số của số nguyên dương của: " << t << " là: " << tong(t) << "." << endl;
    if (ngto(t))
        cout << t << " là số nguyên tố." << endl;
    else
        cout << t << " không là số nguyên tố." << endl;
    return 0;
}
int tong(int t)
{
    int temp = 0;
    while (t > 0)
    {
        temp += t % 10;
        t /= 10;
    }
    return temp;
}
int ngto(int t)
{
    if (t < 2)
        return 0;
    for (int i = 2; i * i <= t; i++)
        if (t % i == 0)
            return 0;
    return 1;
}