/*
Câu 2 (2,0 điểm)
Cho mảng hai chiều a gồm m dòng và n cột, các số nguyên. Chỉ số dòng và cột bắt đầu từ 0. Viết chương trình thực hiện:
a. Tính tổng các phần tử của mảng a.
b. Tính tổng các phần tử trên từng dòng của mảng a.
c. Tính tổng các phần tử trên từng cột của mảng a.
Ví dụ: m = 3, n = 4 thì kết quả câu a là 149.
*/
// DÒNG TRƯỚC CỘT SAU
// Mảng 2 chiều
#include <iostream>
using namespace std;
const int MAXM = 100;
const int MAXN = 100;
void nhap(int a[MAXM][MAXN], int m, int n);
void xuat(int a[MAXM][MAXN], int m, int n);
int tong(int a[MAXM][MAXN], int m, int n);
int tongdong(int a[MAXM][MAXN], int m, int n);
int tongcot(int a[MAXM][MAXN], int m, int n);
int main()
{
    int m, n;
    cout << "Nhập số dòng cho mảng a: ";
    cin >> m;
    cout << "Nhập số cột cho mảng a: ";
    cin >> n;

    int a[MAXM][MAXN];
    nhap(a, m, n);
    xuat(a, m, n);
    cout << "Tính tổng các phần tử của mảng a là: " << tong(a, m, n) << endl;
    cout << "Tính tổng các phần tử trên từng dòng của mảng a: ";
    tongdong(a, m, n);
    cout << endl;
    cout << "Tính tổng các phần tử trên từng cột của mảng a: ";
    tongcot(a, m, n);
    cout << endl;
    return 0;
}
void nhap(int a[MAXM][MAXN], int m, int n)
{
    cout << "Nhập lần lượt các giá trị cho mảng" << endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    cout << "Hoàn tất việc nhập liệu" << endl;
}
void xuat(int a[MAXM][MAXN], int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
    cout << endl;
}

int tong(int a[MAXM][MAXN], int m, int n)
{
    int tong = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            tong += a[i][j];
    return tong;
}

int tongdong(int a[MAXM][MAXN], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        int tong = 0;
        for (int j = 0; j < m; j++)
            tong += a[i][j];
        cout << tong << " ";
    }
}

int tongcot(int a[MAXM][MAXN], int m, int n)
{
    for (int j = 0; j < m; j++)
    {
        int tong = 0;
        for (int i = 0; i < m; i++)
            tong += a[i][j];
        cout << tong << " ";
    }
}