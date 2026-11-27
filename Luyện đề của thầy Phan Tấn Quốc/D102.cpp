/*
Câu 2 (2,0 điểm)
Cho mảng một chiều a gồm n số nguyên (n < 10000). Viết chương trình thực hiện:
a. Nhập mảng a.
b. Tìm giá trị lớn nhất của mảng a.
c. Đếm số cặp (i, j) với i < j sao cho a[i] + a[j] = s, với s là một số nguyên cho trước.
Ví dụ: a = {8, 9, 23, 101, 8, 120}, kết quả câu b là 120.
*/
#include <iostream>
const int MAXN = 10000;
using namespace std;
void nhap(int a[], int n);
void xuat(int a[], int n);
int Max(int a[], int n);
int demsocap(int a[], int n, int s);

int main()
{
    int a[MAXN], n, s;
    cout << "Nhập giá trị cho n (số phần tử của a): ";
    cin >> n;
    cout << "Nhập giá trị cho mảng a gồm " << n << " phần tử:" << endl;
    nhap(a, n);
    xuat(a, n);
    cout << "Giá trị lớn nhất trong mảng a là: " << Max(a, n) << endl;
    cout << "Nhập giá trị cho s: ";
    cin >> s;
    cout << "Số cặp có tổng bằng " << s << " là: " << demsocap(a, n, s) << endl;
    return 0;
}
void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
int Max(int a[], int n)
{
    int maxval = a[0];
    for (int i = 0; i < n; i++)
        if (a[i] > maxval)
            maxval = a[i];
    return maxval;
}
int demsocap(int a[], int n, int s)
{
    int dem = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (a[i] + a[j] == s)
                dem++;
    }
    return dem;
}