/*
**Câu 1 (2,0 điểm)**
Cho mảng hai chiều a gồm m dòng và n cột, mỗi phần tử là một số nguyên dương. Chỉ số dòng và cột bắt đầu từ 0. Viết các hàm sau:
a. Hàm nhập số dòng m, số cột n và các phần tử của mảng; hàm xuất mảng.
Gợi ý: void input_array(int a[maxm][maxn], int &m, int &n) và void output_array(int a[maxm][maxn], int m, int n).
b. Hàm đếm số lượng số nguyên tố trong mảng a.
Gợi ý: int count_prime(int a[maxm][maxn], int m, int n).
c. Hàm tính tổng các phần tử trên từng dòng của mảng a.
Gợi ý: void sum_row(int a[maxm][maxn], int m, int n).
d. Hàm tìm giá trị lớn nhất của từng dòng, sau đó tìm giá trị nhỏ nhất trong các giá trị lớn nhất vừa tìm được.
Gợi ý: int min_max_row(int a[maxm][maxn], int m, int n).
e. Hàm main gọi thực hiện các hàm trên.
Ví dụ: m = 4, n = 6. Kết quả câu b là 7, câu c là 121 82 130 194, câu d là 28.
*/
#include <iostream>
using namespace std;
const int maxm = 100;
const int maxn = 100;
void input_array(int a[maxm][maxn], int &m, int &n);
void output_array(int a[maxm][maxn], int m, int n);
void tong(int a[maxm][maxn], int m, int n);
int min_max_row(int a[maxm][maxn], int m, int n);
int main()
{
    int m;
    int n;
    int a[maxm][maxn];
    input_array(a, m, n);
    output_array(a, m, n);
    cout << "Tổng các phần tử trên từng dòng của mảng a:" << endl;
    tong(a, m, n);
    cout << "Giá trị nhỏ nhất trong các giá trị lớn nhất thuộc từng dòng: " << endl;
    cout << min_max_row(a, m, n) << endl;
    return 0;
}
void input_array(int a[maxm][maxn], int &m, int &n)
{
    cout << "Nhập số dòng: ";
    cin >> m;
    cout << "Nhập số cột: ";
    cin >> n;
    cout << "Nhập từng giá trị cho mảng a[m][n]" << endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}
void output_array(int a[maxm][maxn], int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
    cout << endl;
}
void tong(int a[maxm][maxn], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        int temp = 0;
        for (int j = 0; j < n; j++)
            temp += a[i][j];
        cout << "Tổng giá trị của hàng " << i << " là: " << temp << endl;
        temp = 0;
    }
    cout << endl;
}
int min_max_row(int a[maxm][maxn], int m, int n)
{
    int min = INT_MAX;
    for (int i = 0; i < m; i++)
    {
        int temp = a[i][0];
        for (int j = 1; j < n; j++)
            if (temp < a[i][j])
                temp = a[i][j];
        if (min > temp)
            min = temp;
        temp = 0;
    }
    return min;
}